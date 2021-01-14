// compile & run:     g++ -std=c++11 main.cpp -o main && ./main < input.txt > out.txt
// Problem Url:       https://cses.fi/problemset/task/1637
//
// © Jose Garfias Lopez
//

#include <bits/stdc++.h>

#define INF INT_MAX-1

using namespace std;

int minStepsRecursive(string num, unordered_map<string,int> &dp) { /// TLE
	int n = stoi(num);

	if (n == 0) {
		return 0;
	}

	if (dp.find(num) != dp.end()) {
		return dp[num];
	}

	int minWays = INF;

	for (char c : num) {
		int curr = (c - '0');
		if (curr > 0) {
			int newNum = n - curr;
			if (newNum >= 0) {
				minWays = min(minWays, minStepsRecursive(to_string(newNum), dp) + 1);
			}
		}
	}

	return dp[num] = minWays;
}

int minStepsGreedy(string num) { /// AC
	// always take the greather num in every iteration.
	int n = stoi(num);
	int steps = 0;
	while (n>0) {
		string tmp = to_string(n);
		int maxC = INT_MIN;
		for (char c : tmp) {
			int curr = (c - '0');
			maxC = max(maxC, curr);
		}
		n = n - maxC;
		steps++;
	}

	return steps;
}


int main() {
	string numStr;
	cin>>numStr;
	unordered_map<string,int> dp;

	int answer = minStepsGreedy(numStr);

	cout<<answer<<endl;
}