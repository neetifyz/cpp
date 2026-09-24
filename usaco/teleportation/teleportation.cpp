#include <bits/stdc++.h>
using namespace std;

void setIO(string s) {
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}

int main() {
    setIO("teleport");
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    int direct = abs(a - b);
    int teleport1 = abs(a - x) + abs(y - b);
    int teleport2 = abs(a - y) + abs(x - b);
    int ans = min(direct, min(teleport1, teleport2));
    cout << ans << "\n";
    return 0;
}