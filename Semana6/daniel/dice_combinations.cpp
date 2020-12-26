// https://cses.fi/problemset/task/1633
// Solucion: DP. La funcion es la siguiente:
// f(x) es el numero de formas distintas de sumar x usando el dado.
// f(0) = 1, ya que para sumar 0 se puede de 1 sola forma, que es no tirar el dado.
// f(x) = f(x - 1) + f(x - 2) + ... + f(x - 6)
// Para x < 0, f(x) = 0 ya que es un numero invalido.
// El arbol recursivo se traslapa, por lo que se pueden memorizar los valores de f(x).
#include <bits/stdc++.h>

using namespace std;

typedef long long int i64;

const i64 kMod = 1000000000 + 7;

i64 count(int target, vector<i64>& memo) {
    if (target < 0)
        return 0;
    if (memo[target] != -1)
        return memo[target];
    if (target == 0) {
        memo[target] = 1;
        return memo[target];
    }
    i64 total = 0;
    for (int i = 1; i <= 6; ++i) {
        total += count(target - i, memo);
        total %= kMod;
    }
    memo[target] = total;
    return memo[target];
}

int main() {
    vector<i64> memo(1000003, -1);
    int target;
    cin >> target;

    cout << count(target, memo);

    return 0;
}