#include <bits/stdc++.h>
using namespace std;

int n, a[100];

int solve(int l, int r) {
    if (r - l <= 1) return a[l];
    int m = (r + l) / 2;
    int s1 = solve(l, m);
    int s2 = solve(m, r);
    return s1 + s2;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    cout << solve(0, n) << endl;
}