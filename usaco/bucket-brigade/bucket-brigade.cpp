#include <bits/stdc++.h>
using namespace std;

void setIO(string s) {
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}

int main() {
    setIO("buckets");
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int barnX, barnY, rockX, rockY, lakeX, lakeY;
    vector<string> grid(10);
    for (int x = 0; x < 10; x++) {
        cin >> grid[x];
        for (int y = 0; y < 10; y++) {
            if (grid[x][y] == 'B') {
                barnX = x;
                barnY = y;
            } else if (grid[x][y] == 'R') {
                rockX = x;
                rockY = y;
            } else if (grid[x][y] == 'L') {
                lakeX = x;
                lakeY = y;
            }
        }
    }
    int barnLakeDistance = abs(barnX - lakeX) + abs(barnY - lakeY);
    if (barnX == lakeX && barnX == rockX && rockY > min(barnY, lakeY) && rockY < max(barnY, lakeY)) {
        barnLakeDistance += 2;
    } else if (barnY == lakeY && barnY == rockY && rockX > min(barnX, lakeX) && rockX < max(barnX, lakeX)) {
        barnLakeDistance += 2;
    }
    cout << barnLakeDistance - 1 << "\n";
    return 0;
}