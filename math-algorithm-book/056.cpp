#include <bits/stdc++.h>
using namespace std;

struct Matrix {
    long long p[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
};

Matrix MatrixMult(Matrix m1, Matrix m2) {
    Matrix m;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                m.p[i][j] += (m1.p[i][k] * m2.p[k][j]) % 1000000007;
            }
        }
    }
    return m;
}

Matrix MatrixPower(Matrix m, long long n) {
    Matrix a, p = m;
    bool isFirst = true;
    for (int i = 0; i < 60; i++) {
        if ((n & 1LL<<i) != 0) {
            if(isFirst) {
                a = p;
                isFirst = false;
            }
            else a = MatrixMult(a, p);
        }
        p = MatrixMult(p, p);
    }
    return a;
}

int main() {
    long long n;
    cin >> n;

    Matrix m;
    m.p[0][0] = 1; m.p[0][1] = 1; m.p[0][2] = 1;
    m.p[1][0] = 1;
    m.p[2][1] = 1;
    Matrix ans = MatrixPower(m, n-1);
    cout << (ans.p[2][0] * 2 + ans.p[2][1] + ans.p[2][2]) % 1000000007 << endl;
}