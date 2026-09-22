#include <cstdio>
#include <iostream>
using namespace std;

void setIO(string s) {
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}

int main() {
    setIO("paint");
    int a, b, c, d, tD;
    cin >> a >> b >> c >> d;
    if (max(a, c) <= min(b, d)) {
        tD = max(b, d) - min(a, c);
    } else {
        tD = (b - a) + (d - c);
    }
    cout << tD << endl;
}