#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, ans = 0;
    cin >> n >> m;
    vector<string> s(n), t(m);
    for (auto &x : s) cin >> x;
    for (auto &x : t) cin >> x;

    for (int i = 0; i < n; i++) {
        bool b = false;
        for (int j = 0; j < m; j++) {
            if (s[i].substr(3, 3) == t[j]) b = true;
        }
        if (b) ++ans;
    }
    cout << ans << endl;
}