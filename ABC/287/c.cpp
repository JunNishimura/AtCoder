#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> g(n);

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        g[u-1].push_back(v-1);
        g[v-1].push_back(u-1);
    }

    if (m != n-1) {
        cout << "No" << endl;
        return 0;
    }

    for (int i = 0; i < m; i++) {
        if (g[i].size() > 2) {
            cout << "No" << endl;
            return 0;
        }
    }

    queue<int> q;
    vector<bool> visited(n);
    q.push(0);
    while(!q.empty()) {
        int v = q.front();
        q.pop();
        if (!visited[v]) {
            visited[v] = true;
            for (auto &x : g[v]) {
                q.push(x);
            }
        }
    }

    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
}