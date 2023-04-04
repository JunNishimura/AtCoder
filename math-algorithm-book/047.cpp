#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> g(n);
    int color[200000];
    for (int i = 0; i < n; i++) color[i] = -1; // -1: 未訪問, 0: 黒, 1: 白

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    for (int i = 0; i < n; i++) {
        if (color[i] >= 0) continue;

        queue<int> q;
        q.push(i);
        color[i] = 0;
        while(!q.empty()) {
            int v = q.front();
            q.pop();
            for (auto x: g[v]) {
                if (color[x] == color[v]) {
                    cout << "No" << endl;
                    return 0;
                } else if (color[x] < 0) {
                    q.push(x);
                    color[x] = (color[v] + 1) % 2;
                }
            }
        }
    }

    cout << "Yes" << endl;
}