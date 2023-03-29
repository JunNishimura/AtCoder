#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, prev;
    int a[200009];
    long long b[200009];
    long long ans = 0;

    cin >> n;
    for (int i = 0; i < n-1; i++) cin >> a[i];
    b[0] = 0;
    for (int i = 0; i < n-1; i++) {
        b[i+1] = b[i] + a[i];
    }

    cin >> m;
    for (int i = 0; i < m; i++) {
        int c; cin >> c;
        if (i > 0) {
            ans += abs(b[c-1] - b[prev-1]);
        }
        prev = c;
    } 

    cout << ans << endl;
}