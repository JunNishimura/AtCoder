#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> g;
bool isVisited[100000];

void dfs(int p) {
    if (isVisited[p]) return;
    isVisited[p] = true;
    for (auto x: g[p]) {
        dfs(x);
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    g.resize(n);

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    dfs(0);

    for(int i = 0; i < n; i++) {
        if (!isVisited[i]) {
            cout << "The graph is not connected." << endl;
            return 0;
        }
    }
    cout << "The graph is connected." << endl;
}