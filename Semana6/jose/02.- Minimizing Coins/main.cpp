// compile & run:     g++ -std=c++11 main.cpp -o main && ./main < input.txt > out.txt
// Problem Url:       https://cses.fi/problemset/task/1635
//
// © Jose Garfias Lopez
//

#include <bits/stdc++.h>

#define INF INT_MAX - 1

using namespace std;

int search(vector<int> &possibilities, int target, vector<int> &dp) {
	// BASE CASES
	if (target < 0) {
		return INF;
	}
	if (target == 0) {
		return 0;
	}
	if (dp[target] != -1) {
		return dp[target];
	}
	
	// CHILD NODES OF SEARCH
	int min_of_childs = INF;
	for (int i=0; i<possibilities.size(); i++) {
		int possibility = possibilities[i];
		int newTarget = target - possibility;
		min_of_childs = min(
			min_of_childs,
			(search(possibilities, newTarget, dp) + 1)
		);
	}
	
	return dp[target] = min_of_childs;
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
	
	vector<int> dp(1000002, -1);
	int answer = search(possibilities, x, dp);
	
	if (answer != INF) {
		cout<<answer<<"\n";
	} else {
		cout<<"-1\n";
	}

}