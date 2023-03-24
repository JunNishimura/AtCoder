#include <bits/stdc++.h>
using namespace std;

int main() {
    long long x1, x2, y1, y2, r1, r2;
    cin >> x1 >> y1 >> r1;
    cin >> x2 >> y2 >> r2;

    int answer;
    long long dx = x1 - x2;
    long long dy = y1 - y2;
    double dist = sqrt(dx*dx + dy*dy);
    if (dist < abs(r1-r2)) {
        answer = 1;
    } else if (dist == abs(r1-r2)) {
        answer = 2;
    } else if (abs(r1-r2) < dist && dist < r1+r2) {
        answer = 3;
    } else if (dist == r1+r2) {
        answer = 4;
    } else if (dist > r1+r2) {
        answer = 5;
    }

    cout << answer << endl;
}