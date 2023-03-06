#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    bool a[101];
    for (int i = 0; i < 101; i++) a[i] = false;

    for (int i = 0; i < m; i++) {
        int t; cin >> t;
        a[t] = true;
    }

    int cnt = 1;
    while (cnt <= n) {
        if (a[cnt]) {
            stack<int> st;
            st.push(cnt);
            while (a[cnt++]) {
                st.push(cnt);
            }
            while (!st.empty()) {
                int v = st.top();
                st.pop();
                cout << v << " ";
            }
        } else {
            cout << cnt <<  " ";
            cnt ++;
        }
    }

    cout << endl;
}
