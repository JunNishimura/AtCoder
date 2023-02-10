#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, sum = 0;
  int s[11];

  cin >> n;
  for (int i = 0; i < n; i++) cin >> s[i];

  for (int i = 0; i < n; i++) {
    int t = s[i] - sum;
    cout << t << " ";
    sum += t;
  }
  cout << endl;
}