// https://cses.fi/problemset/task/1633
// Solucion: Usar DP.
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