#include <iostream>

using namespace std;

int recursiveFunction(int n) {
    return n <= 5 ? 1 : recursiveFunction(n - 2) * 5;
}

int main () {
    int n;
    cin >> n;
    cout << recursiveFunction(n);
}