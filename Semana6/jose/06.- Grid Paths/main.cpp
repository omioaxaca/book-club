// compile & run:     g++ -std=c++11 main.cpp -o main && ./main < input.txt > out.txt
// Problem Url:       https://cses.fi/problemset/task/1638
//
// © Jose Garfias Lopez
//

#include <bits/stdc++.h>

using namespace std;

int mod = 1e9+7;

int main() {
	int n;
	cin>>n;
	vector<vector<char>> grid(n+4, vector<char>(n+4, '*')); // all blocked
    
    // READ
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            cin>>grid[i][j];
        }
    }

    // PROCESS
    vector<vector<int>> dp(n+4, vector<int>(n+4, 0));

    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            if (grid[i][j] == '.') {
                if (i == 1 && j == 1) {
                    dp[i][j] = 1;
                } else {
                    dp[i][j] += ((dp[i-1][j] % mod) + (dp[i][j-1] % mod)) % mod;
                }
            } else {
                dp[i][j] = 0;
            }
        }
    }

	cout<<dp[n][n]<<"\n";
}