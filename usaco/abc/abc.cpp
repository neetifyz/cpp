#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int a, b, c, d, e, f, g;
    cin >> a >> b >> c >> d >> e >> f >> g;
    vector<long long> vec = {a, b, c, d, e, f, g};
    sort(vec.begin(), vec.end());
    long long A = vec[0];
    long long B = vec[1];
    long long C = (vec[6] - A) - B;
    cout << A << " " << B << " " << C << "\n";
    return 0;
}