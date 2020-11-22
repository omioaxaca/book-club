// https://cses.fi/problemset/task/1094
// Solucion: Simulacion
#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long int u64;

int main() {
    int n;
    cin >> n;

    u64 turnos = 0;
    int previo;
    cin >> previo;
    for (int i = 1; i < n; ++i) {
        int actual;
        cin >> actual;
        if (actual < previo) {
            turnos += (previo - actual);
        }
        else {
            previo = actual;
        }
    }
    cout << turnos << "\n";

    return 0;
}
