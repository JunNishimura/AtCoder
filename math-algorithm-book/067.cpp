#include <bits/stdc++.h>
using namespace std;

int a[2000][2000];
int r_sum[2000];
int c_sum[2000];

int main() {
    int h, w;
    cin >> h >> w;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < h; i++) {
        r_sum[i] = 0;
        for (int j = 0; j < w; j++) {
            r_sum[i] += a[i][j];
        }
    }

    for (int j = 0; j < w; j++) {
        c_sum[j] = 0;
        for (int i = 0; i < h; i++) {
            c_sum[j] += a[i][j];
        }
    }

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cout << r_sum[i] + c_sum[j] - a[i][j] << " ";
        }
        cout << endl;
    }
}