#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long n1 = 0, n2 = 0, n3 = 0, n4 = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        switch (a)
        {
        case 100:
            n1++;
            break;
        case 200:
            n2++;
            break;
        case 300:
            n3++;
            break;
        case 400:
            n4++;
            break;
        default:
            break;
        }
    }

    cout << n1*n4+n2*n3 << endl;
}