#include <bits/stdc++.h>
using namespace std;

const long long INF = 1LL << 60;
int h[100001];
long long dp [100001];

long long rec(int i) {
    if (dp[i] < INF) return dp[i];

    if (i == 0) return 0;

    long long res = INF;
    res = min(res, rec(i-1)+abs(h[i]-h[i-1]));
    if (i > 1) res = min(res, rec(i-2)+abs(h[i]-h[i-2]));

    return dp[i] = res;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> h[i];
    for (int i = 0; i <= n; i++) dp[i] = INF;
    // dp[0] = 0;

    // 貰うDP
    // for (int i = 0; i < n-1; i++) {
    //     if (i > 0) {
    //         dp[i+1] = min(dp[i+1], dp[i-1]+abs(h[i+1]-h[i-1]));
    //     }
    //     dp[i+1] = min(dp[i+1], dp[i]+abs(h[i+1]-h[i]));
    // }

    // 配るDP
    // for (int i = 0; i < n-1; i++) {
    //     if (i < n-2) {
    //         dp[i+2] = min(dp[i+2], dp[i]+abs(h[i+2]-h[i]));
    //     }
    //     dp[i+1] = min(dp[i+1], dp[i]+abs(h[i+1]-h[i]));
    // }
    // cout << dp[n-1] << endl;

    // メモ化再帰
    cout << rec(n-1) << endl;
    return 0;
}