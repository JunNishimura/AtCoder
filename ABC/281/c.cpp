#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  long long t;
  cin >> t;
  vector<int> a(n);

  for (auto& x : a) {
    cin >> x;
  }

  long long rem = t % accumulate(a.begin(), a.end(), 0ll);

  for (int i = 0; i < n; i++) {
    if (rem - a[i] < 0) {
      cout << i+1 << ' ' << rem << endl;
      return 0;
    }
    rem -= a[i];
  }
}