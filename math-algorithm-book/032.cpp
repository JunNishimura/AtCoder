#include <bits/stdc++.h>
using namespace std;

long long a[100000];

int main() {
    long long n, x;
    cin >> n >> x;
    for (int i = 0; i < n; i++) cin >> a[i];

    sort(a, a+n);
    int left = 0, right = n;
    while (left <= right) {
        int middle = (left+right)/2;
        if (a[middle] == x) {
            cout << "Yes" << endl;
            return 0;
        }
        if (a[middle] < x) {
            left = middle+1;
        }
        if (a[middle] > x) {
            right = middle-1;
        }
    }
    cout << "No" << endl;
}