#include <bits/stdc++.h>
using namespace std;

long long a[500000], dp[500001];

int main() {
    int n, k = 0;

    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];

    dp[0] = 0;
    dp[1] = a[0];
    for (int i = 1; i < n; i++) {
        if (i == k+1) {
            if (dp[i] >= dp[i-1] + a[i]) {
                dp[i+1] = dp[i];
            } else {
                dp[i+1] = dp[i-1] + a[i];
                k = i;
            }
        } else {
            dp[i+1] = dp[i] + a[i];
            k = i;
        }
    }

    cout << dp[n] << endl;
}