// https://cses.fi/problemset/task/1070
// Solucion: Nunca es posible para cantidades de 2 y 3.
// Escribir primero los numeros pares del 1 al n y despues los impares,
// esto asegura que la diferencia entre cada uno es igual a 2.
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    if (n == 1 || n >= 4) {
        for (int i = 2; i <= n; i += 2) {
            cout << i << " ";
        }
        for (int i = 1; i <= n; i += 2) {
            cout << i << " ";
        }
    }
    else {
        cout << "NO SOLUTION\n";
    }


    return 0;
}
