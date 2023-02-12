#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m, ans = 0;
  string s[31];
  cin >> n >> m;

  for (int i = 0; i < n; i++) cin >> s[i];

  for (int i = 0; i < n; i++) {
    for (int j = i+1; j < n; j++) {
      bool isPass = true;
      for (int k = 0; k < m; k++) {
        if (s[i][k] == 'x' && s[j][k] == 'x') isPass = false;
      }
      if (isPass) ans++;
    }
  }
  cout << ans << endl;
}