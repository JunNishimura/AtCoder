#include <bits/stdc++.h>
using namespace std;

long long a[200009];
long long first[200009], second[200009];

int main() {
    long long n, k;
    cin >> n >> k;

    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) first[i] = -1;
    for (int i = 1; i <= n; i++) second[i] = -1;

    long long cnt = 0, cur = 1;
    while (true) {
        if (first[cur] < 0) first[cur] = cnt;
        else if (second[cur] < 0) second[cur] = cnt;

        if (cnt == k) {
            cout << cur << endl;
            return 0;
        } else if (second[cur] > 0 && (k - first[cur]) % (second[cur] - first[cur]) == 0) {
            cout << cur << endl;
            return 0;
        }

        cur = a[cur];
        cnt++;
    }
}