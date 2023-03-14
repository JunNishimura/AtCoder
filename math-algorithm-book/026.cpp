#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    double ans = 0.0;
    for (int i = 0; i < n; i++) {
        ans += 1.0 * n / (n - i) ;
    }
    printf("%.12lf\n", ans);
}