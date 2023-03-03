#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long red = 0, yellow = 0, blue = 0;

    cin >> n;
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        if (a == 1) red++;
        else if (a == 2) yellow++;
        else if (a == 3) blue++;
    }

    long long ans = 0;
    if (red >= 2) {
        ans += red * (red-1) / 2;
    }
    if (yellow >= 2) {
        ans += yellow * (yellow-1) / 2;
    }
    if (blue >= 2) {
        ans += blue * (blue-1) / 2;
    }

    cout << ans << endl;
}