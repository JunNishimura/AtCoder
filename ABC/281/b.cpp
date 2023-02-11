#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  bool isOk = true;
  cin >> s;

  if (s.size() != 8 || !isupper(s[0]) || !isupper(s[s.size()-1])) {
    isOk = false;
  }
  if (s[1] == '0') isOk = false;
  for (int i = 1; i < s.size()-1; i++) {
    if (!isdigit(s[i])) {
      isOk = false;
    }
  }

  cout << (isOk ? "Yes" : "No") << endl;
  return 0;
}