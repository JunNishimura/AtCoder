#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, ans = 1;
  cin >> a >> b;
  for (int i = 0; i < b; i++) {
    ans *= a;
  }
  cout << ans << endl;
}