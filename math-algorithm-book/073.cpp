#include <bits/stdc++.h>
using namespace std;

long long m = 1000000007;
long long a[300000];
long long p[300000];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];

    p[0] = 1;
    for (int i = 1; i < n; i++) p[i] = (2 * p[i-1]) % m;

    long long ans = 0;
    for (int i = 0; i < n; i++) {
        ans = (ans + p[i]*a[i]) % m;
    }
    cout << ans << endl;
}