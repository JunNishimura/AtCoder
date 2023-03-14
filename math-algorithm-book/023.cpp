#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    double a_sum = 0, b_sum = 0;
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        a_sum += a;
    }
    for (int i = 0; i < n; i++) {
        int b; cin >> b;
        b_sum += b;
    }
    double ans = (a_sum + b_sum) / n;
    printf("%.12lf\n", ans);
}