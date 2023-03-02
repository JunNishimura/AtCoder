#include <bits/stdc++.h>
using namespace std;

long long GetGCD(long long a, long long b) {
    while (a >= 1 && b >= 1) {
        if (a > b) a = a % b;
        else b = b % a;
    }
    if (a >= 1) return a;
    return b;
}

long long GetLCM(long long a, long long b) {
    return a / GetGCD(a, b) * b;
}

int main() {
    int n;
    long long a[100001], lcm_v;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];

    lcm_v = GetLCM(a[0], a[1]);
    for (int i = 2; i < n; i++) {
        lcm_v = GetLCM(lcm_v, a[i]);
    }

    cout << lcm_v << endl;
}