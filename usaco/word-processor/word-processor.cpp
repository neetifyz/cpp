#include <bits/stdc++.h>
using namespace std;

void setIO(string s) {
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}

int main() {
    setIO("word");
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int N, K, cL = 0;
    cin >> N >> K;
    vector<string> words(N);
    for (int i = 0; i < N; i++) {
        cin >> words[i];
        if (cL + (words[i]).length() <= K) {
            if (cL > 0) cout << " ";
            cout << words[i];
            cL += words[i].length();
        } else {
            cout << "\n" << words[i];
            cL = words[i].length();
        }
    }
    return 0;
}