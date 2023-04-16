#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n; cin >> n;

    int ans;
    switch (n % 4)
    {
    case 0:
        ans = 6;
        break;
    case 1:
        ans = 2;
        break;
    case 2:
        ans = 4;
        break;
    case 3:
        ans = 8;
        break;
    }

    cout << ans << endl;
}