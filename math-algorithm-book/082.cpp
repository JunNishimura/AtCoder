#include <bits/stdc++.h>
using namespace std;

struct Movie {
    int l, r;
};

bool operator<(const Movie &a1, const Movie &a2) {
    if (a1.r < a2.r) return true;
    if (a1.r > a2.r) return false;
    if (a1.l < a2.l) return true;
    return false;
}

Movie A[300001];

int main() {
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> A[i].l >> A[i].r;
    }
    sort(A, A+n);

    int ans = 0;
    int p = 0;
    for (int i = 0; i < n; i++) {
        if (A[i].l >= p) {
            p = A[i].r;
            ans++;
        }
    }
    cout << ans << endl;
}