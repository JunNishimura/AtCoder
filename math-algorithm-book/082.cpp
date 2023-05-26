#include <bits/stdc++.h>
using namespace std;

int l[300000], r[300000];

int main() {
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> l[i] >> r[i];
    }

    int ans = 0;
    int p = 0;
    while (p <= 86400) {
        int s = 86401;
        for (int i = 0; i < n; i++) {
            if (l[i] >= p && r[i] < s) {
                s = r[i];
            }
        }
        if (s == 86401) break;
        ans++;
        p = s;
    }
    cout << ans << endl;
}