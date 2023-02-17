#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  vector<vector<char>> v(s.size());
  vector<bool> used(256);
  int cnt = 0;

  for (int i = 0; i < s.size(); i++) {
    if (s[i] == '(') cnt++;
    else if (s[i] == ')') {
      for (char c : v[cnt]) used[c] = false;
      v[cnt].clear();
      cnt--;
    }
    else {
      if (used[s[i]]) {
        cout << "No" << endl;
        return 0;
      }
      v[cnt].push_back(s[i]);
      used[s[i]] = true;
    }
  }

  cout << "Yes" << endl;
}