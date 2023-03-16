#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 100000;
    int m = 0;
    for (int i = 0; i < n; i++) {
        double px = rand() / (double)RAND_MAX;
        double py = rand() / (double)RAND_MAX;
        if (px * px + py * py <= 1.0) m++;
    }
    printf("%.12lf\n", 4.0 * m / n);
}