#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int a[200000];

    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];

    for (int i = 0; i < n; i++) {
        int minId = i;
        for (int j = i+1; j < n; j++) {
            if (a[minId] > a[j]) {
                minId = j;
            }
        }
        if (minId != i) {
            int t = a[i];
            a[i] = a[minId];
            a[minId] = t;
        }
    }

    for (int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;
}