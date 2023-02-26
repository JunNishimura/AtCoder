#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, x;
    cin >> n >> x;
    int a[51], b[51];
    bool dp[51][10001];

    for (int i = 0; i < n; i++) for (int j = 0; j <= x; j++) dp[i][j] = false;

    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }

    dp[0][0] = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= x; j++) {
            for (int k = 0; k <= b[i]; k++) {
                if (j-a[i]*k >= 0 && dp[i][j-a[i]*k]) dp[i+1][j] = true;
            }
        }
    }

	if(dp[n][x])cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
	return 0;
}
