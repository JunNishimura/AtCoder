#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int a[200000], b[200000];
    double ans = 0.0;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    for (int i = 0; i < n; i++) {
        ans += 1.0 / 3 * a[i] + 2.0 / 3 * b[i];
    }
    printf("%.12lf\n", ans);
}