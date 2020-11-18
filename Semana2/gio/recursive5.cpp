#include <iostream>

using namespace std;

int recursive(int n, int m) {
    if (n == 1) {
        return recursive(n - 2, m) * -1;
    } else if (n > 3) {
        return 2 + recursive(n - 1, m);
    }
    return 2 * m;
}

int main () {
    int n, m;
    cin >> n >> m;
    cout << recursive(n, m);
}