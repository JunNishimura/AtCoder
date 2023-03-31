#include <bits/stdc++.h>
using namespace std;

long long a[10000001];

int main() {
    int n;
    long long answer = 0;

    cin >> n;
    for (int i = 0; i <= n; i++) a[i] = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j += i) {
            a[j]++;
        }
    }

    for (int i = 1; i <= n; i++) {
        answer += i * a[i];
    }

    cout << answer << endl;
}