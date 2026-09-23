#include <bits\stdc++.h>
using namespace std;

int grid[100][100];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int rows = 7, cols = 7;
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            grid[r][c] = r + c;
        }
    }
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            cout << grid[r][c] << " ";
        }
        cout << "\n";
    }
    return 0;
}