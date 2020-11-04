// https://cses.fi/problemset/task/1068
// Buen problema para aprender recursion y contrastar con programa iterativo.
#include <bits/stdc++.h>

using namespace std;

typedef long long int u64;

void f(u64 n) {
    cout << n << " ";
    if (n == 1) {
        return;
    }
    if (n % 2 == 0) {
        f(n / 2);
    }
    else {
        f(3 * n + 1);
    }
}

int main() {
    u64 n;
    cin >> n;
    f(n);
    return 0;
}