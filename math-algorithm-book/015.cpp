#include <bits/stdc++.h>
using namespace std;

long long GetGCD(long long a, long long b) {
    long long max_v = max(a, b), min_v = min(a, b);
    if (min_v == 0) {
        return max_v;
    }
    return GetGCD(min_v, max_v % min_v);
}

int main() {
    long long a, b;
    cin >> a >> b;
    cout << GetGCD(a, b) << endl;
}