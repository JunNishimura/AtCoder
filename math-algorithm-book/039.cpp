#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    int b[100009];
    cin >> n >> q;

    for (int i = 0; i < 100009; i++) b[i] = 0;

    for (int i = 0; i < q; i++) {
        int l, r, x;
        cin >> l >> r >> x;
        b[l-1] += x;
        b[r] -= x;
    }

    for (int i = 1; i < n; i++) {
        if (b[i] > 0) cout << "<";
        else if (b[i] < 0) cout << ">";
        else cout << "=";
    }

    cout << endl;
}