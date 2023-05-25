#include <bits/stdc++.h>
using namespace std;

long long n, m;
long long dist[100001];
bool isVisited[500009];

vector<pair<int, long long>> G[100001];

void dijkstra() {
    for (int i = 0; i < n; i++) dist[i] = (1LL << 60);
    for (int i = 0; i < m; i++) isVisited[i] = false;
    dist[0] = 0;

    deque<long long> q;
    q.push_back(0);
    while(!q.empty()) {
        long long v = q.front();
        q.pop_front();
        if (isVisited[v]) continue;
        isVisited[v] = true;
        for (pair<int, long long> x : G[v]) {
            int cost = dist[v] + x.second;
            if (v == 0) cost = x.second;
            if (dist[x.first] > cost) {
                dist[x.first] = cost;
                q.push_back(x.first);
            }
        }
    }
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int ta, tb, tc;
        cin >> ta >> tb >> tc;
        ta--;
        tb--;
        G[ta].push_back(make_pair(tb, tc));
        G[tb].push_back(make_pair(ta, tc));
    }

    dijkstra();

    if (dist[n-1] == (1LL << 60)) cout << "-1" << endl;
    else cout << dist[n-1] << endl;
}