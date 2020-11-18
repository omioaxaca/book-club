#include <iostream>

using namespace std;

int recursive(int n) {
    if (n <= 20) {
        return 1;
    }
    return recursive(n - 5) + 5 + n;
}

int main() {
    int n;
    cin >> n;
    cout << recursive(n) << endl;
}