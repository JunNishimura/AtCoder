#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 2; i <= n; i++) {
        bool isOk = true;
        for (int j = 2; j < i; j++) {
            if (i % j == 0) isOk = false;
        }
        if (isOk) cout << i << " "; 
    }
    cout << endl;
}