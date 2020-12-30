// compile & run:     g++ -std=c++11 main.cpp -o main && ./main < input.txt > out.txt
// Problem Url:       https://cses.fi/problemset/task/1633
//
// © Jose Garfias Lopez
//

#include <bits/stdc++.h>

using namespace std;

typedef long long i64;

i64 mod = (1000000000LL + 7LL);

i64 search(vector<int> possibilities, i64 target, vector<i64> &dp) {
	
	// BASE CASES
	if (target < 0) {
		return 0;
	}
	if (target == 0) {
		return 1;
	}
	if (dp[target] != -1) {
		return dp[target];
	}
	
	// CHILD NODES OF SEARCH
	i64 ways = 0;
	for (int i=0; i<possibilities.size(); i++) {
		int possibility = possibilities[i];
		i64 newTarget = target - possibility;
		ways += search(possibilities, newTarget, dp) % mod;
	}
	
	return dp[target] = ways % mod;
}

int main() {
	i64 n;
	cin>>n;
	
	vector<int> possibilities = { 1, 2, 3, 4, 5, 6 };
	vector<i64> dp(1000002, -1);
	i64 answer = search(possibilities, n, dp);
	
	cout<<answer<<"\n";
}