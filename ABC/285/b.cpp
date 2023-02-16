#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n;
  cin >> s;
  for (int i = 1; i < n; i++) {
    int ans = 0;
    for (int j = i+1; j <= n; j++) {
      if (s[j-1] == s[j-i-1]) break;
      ans++;
    }
    cout << ans << endl;
  }
}