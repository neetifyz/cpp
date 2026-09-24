#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, s = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int p = 0;
        for (int j = 0; j < 3; j++) {
            int v;
            cin >> v;
            p += v;
        }
        if (p >= 2) s++;
    }
    cout << s << "\n";
    return 0;
}