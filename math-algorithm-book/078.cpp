#include <bits/stdc++.h>
using namespace std;

bool isVisited[100001];
int dist[100001];

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(n);
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    deque<int> q;
    q.push_back(0);
    isVisited[0] = true;
    dist[0] = 0;
    while(!q.empty()) {
        int p = q.front();
        q.pop_front();
        for (auto x : v[p]) {
            if (isVisited[x]) continue;
            isVisited[x] = true;
            q.push_back(x);
            dist[x] = dist[p] + 1;
        }
    }

    for (int i = 0; i < n; i++) {
        if (!isVisited[i]) cout << "120" << endl;
        else cout << min(dist[i], 120) << endl;
    }
}