#include <bits/stdc++.h>
using namespace std;

int main() {
    double r = 2.0;
    double a = 2.0;

    for (int i = 0; i < 5; i++) {
        double zahyo_x = a;
        double zahyo_y = a * a * a;

        double sessen_a = 3.0 * zahyo_x * zahyo_x;
        double sessen_b = zahyo_y - sessen_a * zahyo_x;

        double next_a = (r - sessen_b) / sessen_a;
        printf("step #%d: a = %.12lf -> %.12lf\n", i, a, next_a);
        a = next_a;
    }
}