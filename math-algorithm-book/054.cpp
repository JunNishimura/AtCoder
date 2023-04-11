#include <bits/stdc++.h>
using namespace std;

struct Matrix {
    long long p[2][2] = {{0, 0}, {0, 0}};
};

Matrix Mult(Matrix m1, Matrix m2) {
    Matrix m;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                m.p[i][j] += (m1.p[i][k] * m2.p[k][j]) % 1000000000;
            }
        }
    }

    return m;
}

Matrix Power(Matrix m, long long n) {
    Matrix r, p = m;
    bool isFirst = true;
    for (int i = 0; i < 60; i++) {
        if ((n & 1LL<<i) != 0) {
            if (isFirst) {
                r = p;
                isFirst = false;
            }
            else r = Mult(r, p); 
        }
        p = Mult(p, p);
    }
    return r;
}

int main() {
    long long n;
    cin >> n;

    Matrix m;
    m.p[0][0] = 1; m.p[0][1] = 1; m.p[1][0] = 1; m.p[1][1] = 0;
    Matrix ans = Power(m, n-1);

    cout << (ans.p[1][0] + ans.p[1][1]) % 1000000000 << endl;
}