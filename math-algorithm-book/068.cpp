#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

long long lcm(long long a, long long b) {
    return (a / gcd(a, b)) * b;
}

int main() {
    long long n, ans = 0;
    int k;
    int v[10];
    cin >> n >> k;
    for (int i = 0; i < k; i++) cin >> v[i];

    for (int i = 1; i < int(pow(2, k)); i++) {
        long long cnt = 0;
        long long lcm_val = 1;
        for (int j = 0; j < k; j++) {
            if ((i & (1<<j)) != 0) {
                cnt++;
                lcm_val = lcm(lcm_val, v[j]);
            }
        }
        long long num = n / lcm_val;
        if (cnt % 2 == 0) ans -= num;
        else ans += num;
    }

    cout << ans << endl;
}