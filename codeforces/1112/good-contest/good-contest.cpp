#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;

        int a1, a2, a3;
        cin >> a1 >> a2 >> a3;

        int weak = n - min({a1, a2, a3});
        cout << weak << "\n";
    }
    return 0;
}