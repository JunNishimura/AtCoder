#include <bits/stdc++.h>
using namespace std;

int n;

int main() {
    cin >> n;
    vector<long long> x(n), y(n);

    for (int i = 0; i < n; i++) cin >> x[i] >> y[i];

    sort(x.begin(), x.end());
    sort(y.begin(), y.end());

    long long ans = 0;
    for (int i = 0; i < n; i++) {
        ans += x[i] * (-n + (i * 2) + 1);
        ans += y[i] * (-n + (i * 2) + 1);
    }
    cout << ans << endl;
}