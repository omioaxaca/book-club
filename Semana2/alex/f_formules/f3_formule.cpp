#include <iostream>

using namespace std;

double recursive(double n) {
    if (n <= 5) {
        cout << 1 << endl;
        return 1;
    }
    double r = recursive(n - 2) * 5;
    printf("%.0lf \n", r);
    return r;
}

int main() {
    double n;
    cin >> n;
    recursive(n);
}