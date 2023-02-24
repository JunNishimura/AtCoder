#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int dp[100000][3];
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        if (i > 0) {
            dp[i][0] = max(dp[i-1][1]+a, dp[i-1][2]+a);
            dp[i][1] = max(dp[i-1][0]+b, dp[i-1][2]+b);
            dp[i][2] = max(dp[i-1][0]+c, dp[i-1][1]+c);
        } else {
            dp[i][0] = a;
            dp[i][1] = b;
            dp[i][2] = c;
        }
    }

    cout << max(max(dp[n-1][0], dp[n-1][1]), dp[n-1][2]) << endl;

    return 0;
}