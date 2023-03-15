#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, x;
    cin >> n;
    int a[10], b[100000];
    for (int i = 0; i < n; i++) cin >> a[i];
    cin >> m;
    for (int i = 0; i < m; i++) cin >> b[i];
    cin >> x;

    bool dp[100001];
    dp[0] = true;
    int bCnt = 0;
    for (int i = 1; i <= x; i++) {
        if (i == b[bCnt]) {
            if (bCnt < m) bCnt++;
            continue;
        }
        for (int j = 0; j < n; j++) {
            if (i-a[j] >= 0 && dp[i-a[j]]) {
                dp[i] = true;
            }
        }
    }
    if (dp[x]) cout << "Yes" << endl;
    else cout << "No" << endl;
}
