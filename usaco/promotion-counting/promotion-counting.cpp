#include <bits/stdc++.h>
using namespace std;

void setIO(string s) {
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}

int main() {
    setIO("promote");
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int bronzeBefore, bronzeAfter;
    cin >> bronzeBefore >> bronzeAfter;
    int silverBefore, silverAfter;
    cin >> silverBefore >> silverAfter;
    int goldBefore, goldAfter;
    cin >> goldBefore >> goldAfter;
    int platinumBefore, platinumAfter;
    cin >> platinumBefore >> platinumAfter;
    int platinumPromotion = platinumAfter - platinumBefore;
    int goldPromotion = platinumPromotion + (goldAfter - goldBefore);
    int silverPromotion = platinumPromotion + (goldAfter - goldBefore) + (silverAfter - silverBefore);
    cout << silverPromotion << "\n" << goldPromotion << "\n" << platinumPromotion << "\n";
    return 0;
}