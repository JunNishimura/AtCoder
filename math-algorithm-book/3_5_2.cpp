#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 1000000;
    int m = 0;
    for (int i = 0; i < n; i++) {
        double px = rand() / (double)RAND_MAX * 6.0;
        double py = rand() / (double)RAND_MAX * 9.0;

        double dist33 = sqrt((px-3.0)*(px-3.0)+(py-3.0)*(py-3.0));
        double dist37 = sqrt((px-3.0)*(px-3.0)+(py-7.0)*(py-7.0));

        if (dist33 <= 3.0 || dist37 <= 2.0) m++;
    }
    cout << m << endl;
}