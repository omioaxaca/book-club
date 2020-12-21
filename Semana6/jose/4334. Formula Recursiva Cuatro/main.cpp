// compile & run:     g++ -std=c++11 main.cpp -o main && ./main < input.txt > out.txt
// Problem Url:       https://omegaup.com/arena/problem/Formula-Recursiva-Cuatro#problems
//
// © Jose Garfias Lopez
//

#include <bits/stdc++.h>

using namespace std;

int func(int x, vector<int> &dp) {
	
	if (dp[x] != -1) {
		return dp[x];
	}
	
	int val = 1;
	if (x <= 3) {
		val = 1;
	} else {
		val = func(x-1, dp) + func(x-2, dp) + func(x-3, dp);
	}
	
	return dp[x] = val;
}

int main() {
	int n;
	cin>>n;
	
	vector<int> dp(50, -1);
	int answer = func(n, dp);
	
	cout<<answer<<"\n";
}