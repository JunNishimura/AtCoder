#include <bits/stdc++.h>
using namespace std;

int n, a[200001], c[200001];

void MergeSort(int l, int r) {
    if (r - l == 1) return;

    int m = (l + r) / 2;
    MergeSort(l, m);
    MergeSort(m, r);

    int li = 0, ri = 0;
    for (int i = 0; i < r-l; i++) {
        if (l+li == m) {
            c[i] = a[m+ri];
            ri++;
        } else if (m+ri == r) {
            c[i] = a[l+li];
            li++;
        } else {
            if (a[l+li] < a[m+ri]) {
                c[i] = a[l+li];
                li++;
            } else {
                c[i] = a[m+ri];
                ri++;
            }
        }
    }
    for (int i = 0; i < r-l; i++) {
        a[l+i] = c[i];
    }
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];

    MergeSort(0, n);
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;
}