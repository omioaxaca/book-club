#include <iostream>

using namespace std;

int recursive(int n) {
    if (n <= 5) {
        return 1;
    }
    return recursive(n - 2) * 5;
}

int main() {
    int n;
    cin >> n;
    cout << recursive(n) << endl;
}