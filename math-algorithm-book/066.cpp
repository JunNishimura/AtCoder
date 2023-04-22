#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    long long yojisho = 0;
    for (int a = 1; a <= n; a++) {
        for (int b = max(1, a-(k-1)); b <= min(n, a+(k-1)); b++) {
            for (int c = max(1, a-(k-1)); c <= min(n, a+(k-1)); c++) {
                if (abs(b-c) <= k-1) yojisho++;
            }
        }
    }

    cout << (long long)n*n*n - yojisho << endl;
}