#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    for (long long i = 1; i * i <= n; i++) {
        if (n % i != 0) continue;
        cout << i << endl;
        if (i != n/i) {
            cout << n/i << endl;
        }
    }
}