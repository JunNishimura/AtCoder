#include <bits/stdc++.h>
using namespace std;

long long GetGCD(long long a, long long b) {
    long long max_v = max(a, b), min_v = min(a, b);
    if (min_v == 0) {
        return max_v;
    }
    return GetGCD(min_v, max_v % min_v);
}

int main() {
    int n;
    long long a[100001], ans;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];

    ans = GetGCD(a[0], a[1]);
    for (int i = 2; i < n; i++) {
        ans = GetGCD(ans, a[i]);
    }
    cout << ans << endl;
}