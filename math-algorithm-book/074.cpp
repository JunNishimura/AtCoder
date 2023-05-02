#include <bits/stdc++.h>
using namespace std;

int a[200000];

int main() {
    int n; cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];

    long long ans = 0;
    for (int i = 0; i < n; i++) {
        ans += -a[i] * (n - (2LL * i + 1LL));
    }
    cout << ans << endl;
}