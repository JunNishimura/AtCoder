#include <bits/stdc++.h>
using namespace std;

long long dp[101][100000];

int main() {
    int n, w;
    int ws[101], vs[101];

    cin >> n >> w;
    for (int i = 0; i < n; i++) {
        cin >> ws[i] >> vs[i];
    }

    for (int i = 0; i <= w; i++) dp[0][i] = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= w; j++) {
            if (j < ws[i-1]) dp[i][j] = dp[i-1][j];
            else dp[i][j] = max(dp[i-1][j], dp[i-1][j-ws[i-1]]+vs[i-1]);
        }
    }

    cout << dp[n][w] << endl;
}