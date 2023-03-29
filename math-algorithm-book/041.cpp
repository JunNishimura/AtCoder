#include <bits/stdc++.h>
using namespace std;

int a[500009], b[500009];

int main() {
    int t, n;

    for (int i = 0; i < 500009; i++) a[i] = 0;

    cin >> t >> n;
    for (int i = 0; i < n; i++) {
        int l, r;
        cin >> l >> r;
        a[l]++;
        a[r]--;
    }
    b[0] = 0;
    for (int i = 0; i < t; i++) {
        b[i+1] = b[i] + a[i];
    }

    for (int i = 1; i <= t; i++) {
        cout << b[i] << endl;
    }
}