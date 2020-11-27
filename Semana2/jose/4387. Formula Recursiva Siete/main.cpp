// compile & run:     g++ -std=c++11 main.cpp -o main && ./main < input.txt > out.txt
// Problem Url: https://omegaup.com/arena/problem/Formula-Recursiva-Siete
//
// © Jose Garfias Lopez
//

#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

ll f(ll n, ll m) {
    ll x = 0;
    if (n < 5) {
        x = 20;
    } else if (n == 5) {
        x = f(n-2, m-2) * 2;
    } else {
        x = f(n-1, m-1) + 2;
    }
    return x;
}

int main() {
    ll n, m;
    cin>>n>>m;
    cout<<f(n, m)<<endl;
    return (0);
}