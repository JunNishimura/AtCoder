#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    long long points[2000][2];

    for (int i = 0; i < n; i++) cin >> points[i][0] >> points[i][1];

    double closest = -1;
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            long long dx = points[i][0] - points[j][0];
            long long dy = points[i][1] - points[j][1];
            double dist = sqrt(dx*dx+dy*dy);
            if (closest < 0 || dist < closest) {
                closest = dist;
            }
        }
    }

    printf("%.12lf\n", closest);
}