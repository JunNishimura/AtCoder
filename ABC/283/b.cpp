#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, q;
  cin >> n;
  vector<int> a(n);
  for (auto &x : a) cin >> x;
  cin >> q;

  for (int i = 0; i < q; i++) {
    int type;
    cin >> type;
    if (type == 1) {
      int k, x;
      cin >> k >> x;
      a[k-1] = x;
    } else {
      int k;
      cin >> k;
      cout << a[k-1] << endl;
    }
  }
}