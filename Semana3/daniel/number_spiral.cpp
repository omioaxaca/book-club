// https://cses.fi/problemset/task/1071
// Solucion: Analizando el patron de acomodo de los numeros, se puede observar
// que es posible identificar los numeros a las orillas de un cuadrado con tan
// solo saber el tamanio del cuadrado mas pequeno que cubre a x y y.
#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long int u64;

int main() {
    int casos;
    cin >> casos;
    while (casos--) {
        u64 x;
        u64 y;
        cin >> x >> y;

        u64 numero = 0;
        if (x > y) {
            if (x % 2 == 0) {
                numero = x * x;
                numero = numero + 1 - y;
            }
            else {
                numero = (x - 1) * (x - 1);
                numero += y;
            }
        }
        else {
            if (y % 2 == 0) {
                numero = (y - 1) * (y - 1);
                numero += x;
            }
            else {
                numero = y * y;
                numero = numero + 1 - x;
            }
        }
        cout << numero << "\n";
    }

    return 0;
}