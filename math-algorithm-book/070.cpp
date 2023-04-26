#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    long long a[50][2];
    for (int i = 0; i < N; i++) {
        cin >> a[i][0] >> a[i][1];
    }
    long long ans = 1LL<<62;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            for (int k = 0; k < N; k++) {
                for (int l = 0; l < N; l++) {
                    long long lx = a[i][0];
                    long long rx = a[j][0];
                    long long by = a[k][1];
                    long long ty = a[l][1];

                    int cnt = 0;
                    for (int m = 0; m < N; m++) {
                        if (a[m][0] < lx || a[m][0] > rx) continue;
                        if (a[m][1] < by || a[m][1] > ty) continue;

                        cnt++;
                    }

                    if (cnt < K) continue;
                    ans = min(ans, (rx-lx)*(ty-by));
                }
            }
        }
    }

    cout << ans << endl;
}