// compile & run:     g++ -std=c++11 main.cpp -o main && ./main < input.txt > out.txt
// Problem Url:       https://omegaup.com/arena/problem/Formula-Recursiva-Ocho#problems
//
// © Jose Garfias Lopez
//

#include <bits/stdc++.h>

using namespace std;

typedef long long i64;

i64 func(i64 x, map<i64,i64> &dp) {
	
	if (dp.find(x) != dp.end()) {
		return dp[x];
	}
	
	i64 val = 10;
	if (x <= 3) {
		val = 10;
	} else {
		val = func(x-2, dp) + func(x-4, dp) + 30;
	}
	
	return dp[x] = val;
}

int main() {
	i64 n;
	cin>>n;
	
	map<i64,i64> dp;
	i64 answer = func(n, dp);
	
	cout<<answer<<"\n";
}