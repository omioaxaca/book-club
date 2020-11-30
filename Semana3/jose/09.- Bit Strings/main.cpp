// compile & run:     g++ -std=c++11 main.cpp -o main && ./main < input.txt > out.txt
// Problem Url:       https://cses.fi/problemset/task/1617
//
// © Jose Garfias Lopez
//

#include <bits/stdc++.h>

typedef long long i64;

using namespace std;

i64 modularExp(i64 a, i64 b, i64 m) {
    i64 res = 1;
    for (int i=0; i<b; i++) {
        res = (res * (a % m)) % m; // ((a * b) % m) = ((a%m) * (b%m)) % m
    }
    return res;
}

int main() {
    i64 n;
    cin>>n;

    i64 mod = (1000000000LL + 7LL);
    i64 answer = modularExp(2LL, n, mod);

    cout<<answer<<"\n";

    return (0);
}
