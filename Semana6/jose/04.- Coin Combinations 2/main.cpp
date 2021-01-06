// compile & run:     g++ -std=c++11 main.cpp -o main && ./main < input.txt > out.txt
// Problem Url:       https://cses.fi/problemset/task/1636
//
// © Jose Garfias Lopez
//

#include <bits/stdc++.h>

using namespace std;

int mod = (1000000000LL + 7LL);

int search_recursive(vector<int> &possibilities, int target, int i, vector<vector<int>> &dp) { // TLE
	// BASE CASES
	if (target < 0 || i >= possibilities.size() || i < 0) {
		return 0;
	}
	if (target == 0) {
		return 1;
	}
	if (dp[i][target] != -1) {
		return dp[i][target];
	}
	
	// INCLUDE OR EXCLUDE (0/1 knapsack)
	int newTarget = target - possibilities[i];
	int ways = (search_recursive(possibilities, newTarget, i, dp) % mod) + (search_recursive(possibilities, target, i + 1, dp) % mod);

	return dp[i][target] = ways % mod;
}

int search_iterative(vector<int> &possibilities, int target, vector<vector<int>> &dp) { // AC
	
    int n = possibilities.size();
    
    for (int i=0; i<=target; i++) {
        dp[0][i] = 0;
    }
    for (int j=0; j<=n; j++) {
        dp[j][0] = 1;
    }
    
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=target; j++) {
            int k = possibilities[i-1];
            
            if (j<k) {
                dp[i][j] = dp[i-1][j];
            } else {
                dp[i][j] = ((dp[i-1][j]) + (dp[i][j-k])) % mod;
            }        
            
        }
    }
    
    return dp[n][target];
}

int main() {
	int n, x;
	cin>>n>>x;
	vector<int> possibilities;
	
	for (int i=0; i<n; i++) {
		int tmp;
		cin>>tmp;
		possibilities.push_back(tmp);
	}
	
	vector<vector<int>> dp (n + 10, vector<int>(x + 10, -1));
	int answer = 0;
	bool iterative = true;

	if (iterative) {
		answer = search_iterative(possibilities, x, dp);
	} else {
		answer = search_recursive(possibilities, x, 0, dp);
	}
	
	cout<<answer<<"\n";
}