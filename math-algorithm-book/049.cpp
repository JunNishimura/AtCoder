#include <bits/stdc++.h>
using namespace std;

int a[10000009];
int main() {
    int n;
    int m = 1000000007;
    cin >> n;

    a[0] = a[1] = 1;
    for (int i = 2; i < n; i++) {
        a[i] = a[i-1] % m + a[i-2] % m; 
    }

    cout << a[n-1] % m << endl;
}