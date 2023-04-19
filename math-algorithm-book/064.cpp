#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    int a[50];
    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> a[i];

    int sum = 0;
    for (int i = 0; i < n; i++) sum += a[i];

    k -= sum;
    if (k < 0 || k % 2 == 1) cout << "No" << endl;
    else cout << "Yes" << endl;
}