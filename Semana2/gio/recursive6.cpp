#include <iostream>

using namespace std;

int recursive(int n) {
    return n <= 20 ? 1 : recursive(n - 5) + 5 + n;
}

int main () {
    int n;
    cin >> n;
    cout << recursive(n);
}