#include <bits/stdc++.h>
using namespace std;

long long CalcFact(int n) {
    if (n <= 1) return 1;
    return n * CalcFact(n-1);
}

long long CalcComb(int n, int r) {
    return CalcFact(n) / CalcFact(n-r) / CalcFact(r);
}

int main() {
    int n, r;
    cin >> n >> r;
    
    cout << CalcComb(n, r) << endl;
}