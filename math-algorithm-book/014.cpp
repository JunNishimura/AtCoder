#include <bits/stdc++.h>
using namespace std;

long long divisor(long long m) {
    for (long long i = 2; i * i <= m; i++) {
        if (m % i == 0) {
            return i;
        }
    }
    return m;
}

int main() {
    long long n;
    cin >> n;

    while (n > 1) {
        long long d = divisor(n);
        cout << d << " ";
        n /= d;
    }
    cout << endl;
}