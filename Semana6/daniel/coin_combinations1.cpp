// https://cses.fi/problemset/task/1635
// Solucion: Usar DP. Similar a dice combinations, pero con valores de un arreglo en vez del 1 al 6.
#include <bits/stdc++.h>

using namespace std;

typedef long long int i64;

const i64 kMod = 1000000000 + 7;

i64 count(int target, const vector<int>& coins, vector<i64>& memo) {
    if (target < 0)
        return 0;
    if (memo[target] != -1)
        return memo[target];
    if (target == 0) {
        memo[target] = 1;
        return memo[target];
    }
    i64 total = 0;
    for (auto c : coins) {
        total += count(target - c, coins, memo);
        total %= kMod;
    }
    memo[target] = total;
    return memo[target];
}

int main() {
    vector<i64> memo(1000003, -1);
    int numCoins;
    int target;
    cin >> numCoins >> target;

    vector<int> coins(numCoins);
    for (auto& c : coins) {
        cin >> c;
    }
    cout << count(target, coins, memo);

    return 0;
}