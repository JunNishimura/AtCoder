#include <bits/stdc++.h>
using namespace std;

long long modpow(long long a, long long b, long long m) {
    long long ans = 1, p = a;
    for (int i = 0; i < 60; i++) {
        if ((b & 1LL<<i) != 0) ans = (ans * p) % m;
        p = (p * p) % m;
    }
    return ans;
}

long long Division(long long a, long long b, long long m) {
    return (a * modpow(b, m-2, m)) % m;
}

int main() {
    long long n; cin >> n;
    long long m = 1000000007;

    long long a = modpow(4, n+1, m) - 1;
    long long b = Division(a, 3, m);

    cout << b << endl;
}