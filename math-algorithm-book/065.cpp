#include <bits/stdc++.h>
using namespace std;

int main() {
    long long h, w;
    cin >> h >> w;
    long long ans = 0;
    if (h == 1 || w == 1) ans = 1;
    else ans = (h * w + 1) / 2;
    cout << ans << endl;
}