#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x, y;
    cin >> n >> x >> y;

    if ((abs(x) + abs(y) <= n) && ((x + y) % 2 == n % 2)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}