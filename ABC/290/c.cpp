#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    map<int, int> mp;
    
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        int t; cin >> t;
        if (mp.find(t) != mp.end()) {
            mp[t] += 1;
        } else {
            mp[t] = 1;
        }
    }

    int cnt = 0;
    while (cnt < k) {
        if (mp[cnt] > 0) cnt++;
        else break;
    }
    cout << cnt << endl;
}
