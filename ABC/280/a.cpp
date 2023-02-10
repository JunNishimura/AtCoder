#include <bits/stdc++.h>
using namespace std;

int main() {
  int H, W, ans = 0;
  string s;

  cin >> H >> W;
  for (int i = 0; i < H; i++) {
    cin >> s;
    for (int j = 0; j < W; j++) {
      if (s[j] == '#') ans++;
    }
  }

  cout << ans << endl;
  return 0;
}