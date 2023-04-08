#include <bits/stdc++.h>
using namespace std;

long long factorial(int n, int m) {
    if (n <= 1) return 1;
    return (n * factorial(n-1, m)) % m;
}

long long modpow(long long a, long long b, long long m) {
    long long ans = 1, p = a;
    for (int i = 0; i < 30; i++) {
        if ((b & (1<<i)) != 0) {
            ans = (ans * p) % m;
        }
        p = (p * p) % m;
    }

    return ans;
}

int main() {
    int x, y;
    cin >> x >> y;

    int m = 1000000007;

    int a = factorial(x+y, m);
    int b = (factorial(x, m) * factorial(y, m)) % m;

    cout << (a * modpow(b, m-2, m)) % m << endl;
}