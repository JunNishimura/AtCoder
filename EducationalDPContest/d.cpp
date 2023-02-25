#include <bits/stdc++.h>
using namespace std;

int n;
long long w, weights[101], values[101];
long long dp[101][100001] = {0};

int main() {
    cin >> n >> w;
    for (int i = 0; i < n; i++) cin >> weights[i] >> values[i];
    for (int i = 0; i <= w; i++) dp[0][i] = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= w; j++) {
            if (j >= weights[i]) {
                dp[i+1][j] = max(dp[i][j], dp[i][j-weights[i]]+values[i]);
            } else {
                dp[i+1][j] = dp[i][j];
            }
        }
    }
    cout << dp[n][w] << endl;
}