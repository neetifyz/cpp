#include <bits/stdc++.h>
using namespace std;

void setIO(string s) {
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}

int main() {
    setIO("shell");
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> shell(3);
    for (int i = 0; i < 3; i++) { shell[i] = i; }
    vector<int> counter(3);
    for (int i = 0; i < n; i++) {
        int a, b, g;
        cin >> a >> b >> g;
        a--, b--, g--;
        swap(shell[a], shell[b]);
        counter[shell[g]]++;
    }
    cout << max({counter[0], counter[1], counter[2]}) << "\n";
    return 0;
}