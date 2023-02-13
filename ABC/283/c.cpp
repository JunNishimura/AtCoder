#include <bits/stdc++.h>
using namespace std;

int main() {
  int i = 0, ans = 0;
  string s;
  cin >> s;

  while (i < s.length()) {
    if (i+1 < s.length() && s[i+1] == '0') {
      i++;
    }
    ans++;
    i++;
  }
  cout << ans << endl;
}