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

    vector<int> visited(n);

    int s = 0;
    for (int i = 0; i < n; i++) {
        if (visited[i]) continue;

        s++;
        queue<int> q;
        q.push(i);
        while(!q.empty()) {
            int v = q.front();
            q.pop();
            visited[v] = true;
            for (int x : g[v]) {
                if (!visited[x]) q.push(x);
            }
        }
    }

    cout << m - n + s << endl;
}
