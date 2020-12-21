// compile & run:     g++ -std=c++11 main.cpp -o main && ./main < input.txt > out.txt
// Problem Url:       https://omegaup.com/arena/problem/Recursion-con-memorizacion/#problems
//
// © Jose Garfias Lopez
//

#include <bits/stdc++.h>

#define MOD ULLONG_MAX

using namespace std;

typedef unsigned long long i64;


i64 func(i64 a, i64 b, i64 c, map<vector<i64>, i64> &dp) {
    vector<i64> key = {a, b, c};
    if (dp.find(key) != dp.end()) {
        return dp[key];
    }
    
    i64 minNumber = min(min(a,b),c);
    i64 val = 0;
    
    if (minNumber <= 3) {
        val = (a%MOD) + (((2) * (b%MOD))%MOD) + ((3)*(c%MOD)%MOD);
    } else if ((a + b + c) == 100ULL) {
        val = 0;
    } else {
        val = ((func(a-1,b-1,c-1,dp))%MOD) + (func(a,b-3,c-3,dp)%MOD) + (func(a/2,b,c,dp)%MOD);
    }
    
    return dp[key] = val%MOD;
}

int main() {

    i64 a,b,c;
    cin>>a>>b>>c;
    
    map<vector<i64>, i64> dp;
    
    i64 result = func(a,b,c,dp);
    
    cout<<result<<" "<<dp.size()<<endl;

    return(0);
}