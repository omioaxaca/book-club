// compile & run:     g++ -std=c++11 main.cpp -o main && ./main < input.txt > out.txt
// Problem Url:       https://cses.fi/problemset/task/1071
//
// © Jose Garfias Lopez
//

#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ll;

int main() {
	int tests;
	cin>>tests;
	
	while(tests--) {
		ll i,j;
		cin>>i>>j;
		
		ll x = i;
		if (j>i) {
			x = j;
		}
		
		bool even = x % 2 == 0;
		ll serieVal = ((x*x) - (x-1));
		ll diff = llabs(i-j);
		
		if (i<j) {
			if (even) {
				cout<<serieVal - diff<<endl;
			} else {
				cout<<serieVal + diff<<endl;
			}
		} else if (i>j) {
			if (even) {
				cout<<serieVal + diff<<endl;
			} else {
				cout<<serieVal - diff<<endl;
			}
		} else {
			cout<<serieVal<<endl;
		}
	}
    
    return (0);
}
