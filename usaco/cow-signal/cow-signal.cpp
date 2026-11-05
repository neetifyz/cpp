#include <bits/stdc++.h>
using namespace std;

void setIO(string s) {
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}

int main() {
    setIO("cowsignal");
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int m, n, k;
    cin >> m >> n >> k;

    string a[10];
    for (int i = 0; i < m; i++) { cin >> a[i]; };

    for (int i = 0; i < m * k; i++) {
        for (int j = 0; j < n * k; j++) {
            cout << a[i / k][j / k];
        }
        cout << "\n";
    }
}