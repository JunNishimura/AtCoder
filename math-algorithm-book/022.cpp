#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n; cin >> n;
    map<long, long> m;
    for (int i = 0; i < n; i++) {
        long long a; cin >> a;
        m[a] += 1;
    }

    long long ans = 0;
    for (int i = 1; i < 50000; i++) {
        if (m[i] > 0 && m[100000-i] > 0) {
            ans += m[i] * m[100000-i];
        }
    }
    if (m[50000] > 0) {
        ans += m[50000] * (m[50000]-1) / 2;
    }

    cout << ans << endl;
}