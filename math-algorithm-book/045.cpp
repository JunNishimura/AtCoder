#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> g;
int conCnt[100000];
bool isVisited[100000];

void dfs(int v) {
    if (isVisited[v]) return;

    isVisited[v] = true;
    for (auto x: g[v]) {
        if (x > v) conCnt[x]++;
        dfs(x);
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    g.resize(n);
    for(int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }

    for (int i = 0; i < n; i++) conCnt[i] = 0;

    dfs(0);

    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (conCnt[i] == 1) ans++;
    }

    cout << ans << endl;
}