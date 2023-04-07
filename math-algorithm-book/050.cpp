#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    long long ans = 1, p = a;
    for (int i = 0; i < 30; i++) {
        if ((b & (1 << i)) != 0) {
            ans = (ans * p) % 1000000007;
        }
        p = (p * p) % 1000000007;
    }

    cout << ans << endl;
}