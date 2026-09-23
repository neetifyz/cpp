#include <bits/stdc++.h>
using namespace std;

void add_seven(int &x) {
    x += 7;
}

int get_sum(const vector<int> &v) {
    int sum = 0;
    for (int x : v) sum += x;
    return sum;
}

long long factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    vector<int> vec = {7, 77, 777};
    int value = get_sum(vec);
    add_seven(value);
    cout << value << "\n";
    cout << factorial(5) << "\n";
    return 0;
}