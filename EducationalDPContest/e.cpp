#include <bits/stdc++.h>
using namespace std;

const long long INF = 1LL<<60;
long long weights[101], values[101];
long long dp[101][100001];

int main() {
    int n;
    long long w, sv = 0, ans;
    cin >> n >> w;
    for (int i = 0; i < n; i++) {
        cin >> weights[i] >> values[i];
        sv += values[i];
    }
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= sv; j++) {
            dp[i][j] = INF;
        }
    }
    dp[0][0] = 0;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= sv; j++) {
            if (j - values[i] >= 0) {
                dp[i+1][j] = min(dp[i][j], dp[i][j-values[i]]+weights[i]);
            } else {
                dp[i+1][j] = dp[i][j];
            }
        }
    }

    for (int j = sv; j >= 0; j--) {
        if (dp[n][j] <= w) {
            ans = j;
            break;
        }
    }
    cout << ans << endl;

    return 0;
}