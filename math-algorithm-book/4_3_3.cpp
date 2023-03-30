#include <bits/stdc++.h>
using namespace std;

int main() {
    double l = 0, r = 2;
    
    for (int i = 1; i <= 10; i++) {
        double m = (l + r) / 2.0;
        if (m * m < 2) l = m;
        else r = m;
        printf("step #%d: m = %.12lf\n", i, m); 
    }
}