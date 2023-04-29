#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int ans = 1;
    for (int i = 1; i <= b; i++) {
        int da = (a + i - 1) / i;
        int db = b / i;
        if (db - da >= 1) {
            ans = i;
        }
    }

    cout << ans << endl;
}