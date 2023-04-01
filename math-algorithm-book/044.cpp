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
    int dist[100000];
    for (int i = 0; i < 100000; i++) dist[i] = -1;
    dist[0] = 0;

    queue<int> q;
    q.push(0);
    while(!q.empty()) {
        int v = q.front();
        q.pop();
        for (auto x : g[v]) {
            if (dist[x] < 0) {
                q.push(x);
                dist[x] = dist[v] + 1;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << dist[i] << endl;
    }
}