#include <bits/stdc++.h>
using namespace std;

const int N = 3;
const int TURN_NUM = 100;

void setIO(string s) {
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}

int main() {
    setIO("mixmilk");
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    vector<int> capacity(N);
    vector<int> milk(N);
    for (int i = 0; i < N; i++) { cin >> capacity[i] >> milk[i]; };

    for (int i = 0; i < TURN_NUM; i++) {
        int b1 = i % N;
        int b2 = (i + 1) % N;
        int a = min(milk[b1], capacity[b2] - milk[b2]);
        milk[b1] -= a;
        milk[b2] += a;
    }

    for (int m : milk) { cout << m << "\n"; };
}