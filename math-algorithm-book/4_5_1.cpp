#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> g(n);
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    for (int i = 0; i < n; i++) {
        cout << "{";
        for (int j = 0; j < g[i].size(); j++) {
            if (j > 0) cout << ", ";
            cout << g[i][j];
        }
        cout << "}" << endl;
    }
}