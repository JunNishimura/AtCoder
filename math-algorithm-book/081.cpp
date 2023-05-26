#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int tmp;
    long long ans = 0;
    tmp = n / 10000;
    ans += tmp;
    n -= 10000 * tmp;
    tmp = n / 5000;
    ans += tmp;
    n -= 5000 * tmp;
    tmp = n / 1000;
    ans += tmp;
    cout << ans << endl;
}