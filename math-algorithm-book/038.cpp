#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    int a[100000], b[100001];
    cin >> n >> q;
    for (int i = 0; i < n; i++) cin >> a[i];

    b[0] = a[0];
    for (int i = 1; i < n; i++) b[i] = b[i-1] + a[i];

    for (int i = 0; i < q; i++) {
        int l, r;
        cin >> l >> r;
        if (l == 1) cout << b[r-1] << endl;
        else cout << b[r-1] - b[l-2] << endl;
    }
}