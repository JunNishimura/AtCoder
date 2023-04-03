#include <bits/stdc++.h>
using namespace std;

int main() {
    int r, c;
    int sx, sy, gx, gy;
    string m[50];
    int ans[50][50];
    
    cin >> r >> c;
    cin >> sx >> sy >> gx >> gy;
    sx--; sy--;
    gx--; gy--;

    for (int i = 0; i < 50; i++) for (int j = 0; j < 50; j++) ans[i][j] = -1;

    for (int i = 0; i < r; i++) cin >> m[i];

    ans[sx][sy] = 0;
    queue<pair<int, int>> q;
    q.push(make_pair(sx, sy));
    while(!q.empty()) {
        pair<int, int> v = q.front();
        q.pop();
        if (v.first == gx && v.second == gy) break;

        if (m[v.first+1][v.second] == '.' && ans[v.first+1][v.second] < 0) {
            ans[v.first+1][v.second] = ans[v.first][v.second] + 1;
            q.push(make_pair(v.first+1, v.second));
        }
        if (m[v.first-1][v.second] == '.' && ans[v.first-1][v.second] < 0) {
            ans[v.first-1][v.second] = ans[v.first][v.second] + 1;
            q.push(make_pair(v.first-1, v.second));
        }
        if (m[v.first][v.second+1] == '.' && ans[v.first][v.second+1] < 0) {
            ans[v.first][v.second+1] = ans[v.first][v.second] + 1;
            q.push(make_pair(v.first, v.second+1));
        }
        if (m[v.first][v.second-1] == '.' && ans[v.first][v.second-1] < 0) {
            ans[v.first][v.second-1] = ans[v.first][v.second] + 1;
            q.push(make_pair(v.first, v.second-1));
        }                
    }

    cout << ans[gx][gy] << endl;
}