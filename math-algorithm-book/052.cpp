#include <bits/stdc++.h>
using namespace std;

long long m = 1000000007;

long long modpow(long long a, long long b) {
    long long ans = 1, p = a;
    for (int i = 0; i < 30; i++) {
        if ((b & 1<<i) != 0) ans = (ans*p) % m;
        p = (p * p) % m;
    }
    return ans;
}

int main() {
    int x, y;
    cin >> x >> y;

    if ((2*y-x)%3 != 0 || (2*x-y)%3 != 0 || 2*y-x < 0 || 2*x-y < 0) {
        cout << 0 << endl;
        return 0;
    }
    int a = (2*y-x) / 3;
    int b = (2*x-y) / 3;

    long long bunshi = 1, bunbo = 1;
    for (int i = 1; i <= a+b; i++) bunshi = (bunshi * i) % m;
    for (int i = 1; i <= a; i++) bunbo = (bunbo * i) % m;
    for (int i = 1; i <= b; i++) bunbo = (bunbo * i) % m;

    cout << (bunshi * modpow(bunbo, m-2)) % m << endl;
}