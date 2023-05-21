#include <bits/stdc++.h>
using namespace std;

long long n;

int main() {
    cin >> n;
    vector<long long> v;
    for (int i = 0; i < n; i++) {
        long long t; cin >> t;
        v.push_back(t);
    }
    sort(v.begin(), v.end());

    long long ans = 0;
    for (int i = 0; i < n; i++) {
        ans += v[i] * (-n + (i * 2) + 1);
    }
    cout << ans << endl;
}