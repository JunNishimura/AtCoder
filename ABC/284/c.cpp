#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m, ans = 0;
  cin >> n >> m;
  vector<vector<int>> g(n);
  vector<bool> visited(n);

  for (int i = 0; i < m; i++) {
    int u, v;
    cin >> u >> v;
    u--;
    v--;
    g[u].push_back(v);
    g[v].push_back(u);
  }

  queue<int> q;
  for (int i = 0; i < n; i++) {
    if (visited[i]) continue;
    visited[i] = true;
    ans++;
    q.push(i);
    while (!q.empty()) {
      int c = q.front();
      q.pop();
      for (auto &x : g[c]) {
        if (!visited[x]) {
          q.push(x);
          visited[x] = true;
        }
      }
    }
  }

  cout << ans << endl;
}