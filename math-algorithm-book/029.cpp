#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int dp[46];
    
    cin >> n;
    
    dp[0] = 0;
    for (int i = 1; i <= n; i++) {
        if (i == 1) dp[i] = 1;
        else if (i == 2) dp[i] = 2;
        else dp[i] = dp[i-1] + dp[i-2];
    }

    cout << dp[n] << endl;
}