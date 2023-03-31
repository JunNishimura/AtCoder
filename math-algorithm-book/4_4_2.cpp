#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 100000;
    double answer = 0.0;

    for (int i = 0; i < n; i++) {
        double x = 1.0 * (2 * i + 1) / (2 * n);
        answer += pow(2, x * x);
    }
    answer /= n;
    printf("%.12lf\n", answer);
}