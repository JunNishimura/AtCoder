#include <bits/stdc++.h>
using namespace std;

long long a[100000], b[100000];

int main() {
    int n; cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    sort(a, a+n);
    sort(b, b+n);

    long long ans = 0;
    for (int i = 0; i < n; i++) {
        ans += abs(a[i] - b[i]);
    }
    cout << ans << endl;
}