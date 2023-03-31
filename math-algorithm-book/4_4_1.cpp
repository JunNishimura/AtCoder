#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    bool prime[3001];

    for(int i = 0; i <= 3000; i++) prime[i] = true;
    prime[0] = prime[1] = false;

    cin >> n;

    for (int i = 2; i * i <= n; i++) {
        if (prime[i]) {
            for (int j = i * 2; j <= n; j += i) {
                prime[j] = false;
            }
        }
    }

    for (int i = 0; i <= n; i++) {
        if (prime[i]) cout << i << " ";
    }
    cout << endl;
}