#include <iostream>

using namespace std;

int recursive(int n, int m) {
    if (n == 5) {
        return recursive(n - 2, m - 2) * 2;
    } else if (n < 5) {
        return 20;
    }
    return recursive(n -1, m - 1) + 2;
}

int main () {
    int n, m;
    cin >> n >> m;
    cout << recursive(n, m);
}