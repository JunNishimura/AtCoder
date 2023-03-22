#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a[2], b[2], c[2];
    cin >> a[0] >> a[1];
    cin >> b[0] >> b[1];
    cin >> c[0] >> c[1];

    double answer;
    if ((a[0]-b[0])*(c[0]-b[0])+(a[1]-b[1])*(c[1]-b[1]) < 0) {
        answer = sqrt((a[0]-b[0])*(a[0]-b[0])+(a[1]-b[1])*(a[1]-b[1]));
    }
    else if ((a[0]-c[0])*(b[0]-c[0])+(a[1]-c[1])*(b[1]-c[1]) < 0) {
        answer = sqrt((a[0]-c[0])*(a[0]-c[0])+(a[1]-c[1])*(a[1]-c[1]));
    }
    else {
        double S = abs((a[0]-b[0])*(c[1]-b[1])-(a[1]-b[1])*(c[0]-b[0]));
        double bc = sqrt((c[0]-b[0])*(c[0]-b[0])+(c[1]-b[1])*(c[1]-b[1]));
        answer = S / bc;
    }

    printf("%.12lf\n", answer);
}