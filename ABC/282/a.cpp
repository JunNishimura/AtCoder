#include <bits/stdc++.h>
using namespace std;

int main() {
  int k;
  string s;
  cin >> k;
  for (int i = 0; i < k; i++) {
    s += 'A' + i;
  }
  cout << s << endl;
}