#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long k = 1;
    while (true) {
        if (pow(2, k)-1 == n) {
            cout << "Second" << endl;
            return 0;
        } else if (pow(2, k) > n) break;
        k++;
    }
    cout << "First" << endl;
}