#include <bits/stdc++.h>
using namespace std;

double a[501], b[501], c[501];

int main() {
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i] >> c[i];
    }

    double ans = -1;
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (a[i]*b[j] == a[j]*b[i]) continue;

            double cx = (c[i]*b[j]-c[j]*b[i])/(a[i]*b[j]-a[j]*b[i]);
            double cy = (c[i]*a[j]-c[j]*a[i])/(b[i]*a[j]-b[j]*a[i]);

            bool isOk = true;
            for (int k = 0; k < n; k++) {
                if (a[k]*cx+b[k]*cy > c[k]) isOk = false;
            }

            if (isOk) ans = max(ans, cx+cy);
        }
    }

    printf("%.12lf\n", ans);
}