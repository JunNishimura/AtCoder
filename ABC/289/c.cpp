#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(m);
    for (int i = 0; i < m; i++) {
        int c; cin >> c;
        for (int j = 0; j < c; j++) {
            int t; cin >> t;
            a[i].push_back(t);
        }
    }
    int ans = 0;
    for (int i = 1; i <= pow(2, m); i++) {
        set<int> s;
        for (int j = 0; j < m; j++) {
            if ((1<<j & i) > 0) {
                for (auto x : a[j]) {
                    s.insert(x);
                }
            }
        }
        bool ok = true;
        for (int i = 1; i <= n; i++) {
            if (s.count(i) == 0) ok = false;
        }
        if (ok) ans++;
    }
    
    cout << ans << endl;
}
