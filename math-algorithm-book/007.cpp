#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x, y, cnt = 0;
    cin >> n >> x >> y;
    for (int i = 1; i <= n; i++) {
        if (i % x == 0 || i % y == 0) cnt++;
    }
    cout << cnt << endl;
}