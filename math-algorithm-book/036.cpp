#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, h, m;
    cin >> a >> b >> h >> m;

    pair<double, double> v1, v2;

    // v1
    double theta = 90 - 30 * h - 0.5 * m;
    double rad = theta * M_PI / 180;
    v1.first = cos(rad) * a;
    v1.second = sin(rad) * a;

    // v2
    theta = 90 - m*6;
    if (theta < 0) theta = 360 + theta;
    rad = theta * M_PI / 180;
    v2.first = cos(rad) * b;
    v2.second = sin(rad) * b;

    double length, dx, dy;
    dx = v1.first - v2.first;
    dy = v1.second - v2.second;
    length = sqrt(dx*dx+dy*dy);

    printf("%.12lf\n", length);
}