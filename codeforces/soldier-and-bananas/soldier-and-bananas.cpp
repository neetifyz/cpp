#include <bits\stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int k, n, w;
    cin >> k >> n >> w;
    for (int i = 1; i <= w; i++) {
        n -= i * k;
    }
    if (n >= 0) {cout << "0" << "\n";} else {cout << abs(n) << "\n";};
}