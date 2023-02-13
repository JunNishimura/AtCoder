#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, s = 0;
  int a[51];
  cin >> n;
  for (int i = 0; i < n; i++) cin >> a[i];
  for (int i = 0; i < n; i++) s += a[i];
  cout << s << endl;
}