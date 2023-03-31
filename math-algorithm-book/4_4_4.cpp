#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n = 1;
    int target = 30;
    double curVal = 0.0;

    while (curVal < target) {
        curVal += 1.0 / n;
        n++;
    }

    cout << n << endl;
}