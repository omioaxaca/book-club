// https://cses.fi/problemset/task/1634
// solucion: DP.
#include <bits/stdc++.h>
#define INF INT_MAX - 1

using namespace std;

int minimize(int target, const vector<int>& coins, vector<int>& memo) {
    if (target < 0)
        return INF;
    if (memo[target] != -1)
        return memo[target];
    if (target == 0) {
        return 0;
    }
    int mini = INF;
    for (auto& c : coins) {
        mini = min(mini, 1 + minimize(target - c, coins, memo));
    }
    memo[target] = mini;
    return memo[target];
}

int main() {
    vector<int> memo(1000003, -1);
    int numCoins;
    int target;
    cin >> numCoins >> target;

    vector<int> coins(numCoins);
    for (auto& c : coins) {
        cin >> c;
    }
    int mini = minimize(target, coins, memo);
    if (mini == INF)
        cout << "-1\n";
    else
        cout << mini << "\n";


    return 0;
}