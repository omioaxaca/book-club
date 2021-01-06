// compile & run:     g++ -std=c++11 main.cpp -o main && ./main < input.txt > out.txt
// Problem Url:       https://cses.fi/problemset/task/1635
//
// © Jose Garfias Lopez
//

#include <bits/stdc++.h>

using namespace std;

typedef long long i64;

i64 mod = (1000000000LL + 7LL);

i64 search(vector<int> &possibilities, i64 target, vector<i64> &dp) {
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
		ways += search(possibilities, newTarget, dp);
	}
	
	return dp[target] = ways % mod;
}

int main() {
	i64 n, x;
	cin>>n>>x;
	vector<int> possibilities;
	
	for (int i=0; i<n; i++) {
		int tmp;
		cin>>tmp;
		possibilities.push_back(tmp);
	}
	
	vector<i64> dp(1000002, -1);
	i64 answer = search(possibilities, x, dp);
	
	cout<<answer<<"\n";
}