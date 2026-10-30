#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        long long a, b, c;
        cin >> a >> b >> c;
        long long o = abs((a + c) - b);
        long long n = abs(a - b);
        o = max(o, n);
        cout << o << "\n";
    }
    return 0;
}