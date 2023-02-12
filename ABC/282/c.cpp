#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  bool flag = false;
  string s;
  cin >> n;
  cin >> s;

  for (int i = 0; i < n; i++) {
    if (s[i] == ',' && !flag) {
      s[i] = '.';
    } else if (s[i] == '"') {
      flag = !flag;
    }
  }
  cout << s << endl;
}