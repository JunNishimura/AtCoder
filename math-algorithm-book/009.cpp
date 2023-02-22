#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, s;
    int A[10001];
    bool isOk = false;
    cin >> n >> s;
    for (int i = 0; i < n; i++) cin >> A[i];

    for (int i = 0; i < 1<<n; i++) {
        int t = 0;
        for (int j = 0; j < n; j++) {
            if (i & 1<<j) t += A[j];
        }
        if (t == s) isOk = true;
    }
    cout << (isOk ? "Yes" : "No") << endl;
}