// https://cses.fi/problemset/task/1083
// Solucion 1: Usar una cubeta para marcar los numeros que aparecen
// Solucion 2: Utilizar xor
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<bool> freq(n + 1, false);
    for (int i = 1; i < n; ++i) {
        int x;
        cin >> x;
        freq[x] = true;
    }

    for (int i = 1; i <= n; ++i) {
        if (!freq[i]) {
            cout << i << "\n";
            break;
        }
    }

    return 0;
}