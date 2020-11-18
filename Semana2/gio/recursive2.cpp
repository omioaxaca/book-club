#include <iostream>

using namespace std;

double recursive(double n) {
    double result = n <= 5 ? 1 : recursive(n - 2) * 5;
    printf("%.0lf\n", result);
    return  result;

}

int main () {
    int n;
    cin >> n;
    recursive(n);
}