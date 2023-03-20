#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, s;
    int a[60];
    bool dp[61][10001];

    cin >> n >> s;
    for (int i = 0; i < n; i++) cin >> a[i];

    for (int j = 0; j <= 10000; j++) dp[0][j] = false;
    dp[0][0] = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= s; j++) {
            if (a[i] > j) dp[i+1][j] = dp[i][j];
            else if (dp[i][j-a[i]]) dp[i+1][j] = true;
            else dp[i+1][j] = dp[i][j];
        }
    }
    
    cout << (dp[n][s] ? "Yes" : "No") << endl;
}