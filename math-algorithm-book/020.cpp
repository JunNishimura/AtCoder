#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int a[100];

    for (int i = 0; i < n; i++) cin >> a[i];

    long long ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            for (int k = j+1; k < n; k++) {
                for (int l = k+1; l < n; l++) {
                    for (int m = l+1; m < n; m++) {
                        if (a[i]+a[j]+a[k]+a[l]+a[m] == 1000) ans++;
                    }
                }
            }
        }
    }

    cout << ans << endl;
}