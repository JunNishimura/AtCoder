#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    double ans = 0;
    for (int i = 0; i < n; i++) {
        double p, q;
        cin >> p >> q;
        ans += q / p;
    }   
    printf("%.12lf\n", ans);
}