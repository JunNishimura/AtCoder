#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  long long ans = 0;
  for (int i = 0; i < s.length(); i++) {
    int c = s[i] - 'A' + 1;
    ans += pow(26, s.length()-i-1) * c;
  }
  cout << ans << endl;
}