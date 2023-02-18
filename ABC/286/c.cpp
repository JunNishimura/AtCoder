#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int n;
    long long a, b, ans = 1ll << 60;
    cin >> n >> a >> b >> s;

    s += s;
    for (int i = 0; i < n; i++) {
        long long tmp = a * i;
        for (int j = 0; j < n/2; j++) {
            int l = i+j;
            int r = n+i-j-1;
            if (s[l] != s[r]) tmp += b;
        }
        ans = min(ans, tmp);
    }

    cout << ans << endl;
}