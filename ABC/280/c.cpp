#include <bits/stdc++.h>
using namespace std;

int main() {
  string s,t;
  cin >> s;
  cin >> t;

  for (int i = 0; i < s.length(); i++) {
    if (s[i] != t[i]) {
      cout << i+1 << endl;
      return 0;
    }
  }
  cout << s.length()+1 << endl;
}