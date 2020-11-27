// compile & run:     g++ -std=c++11 main.cpp -o main && ./main < input.txt > out.txt
// Problem Url: https://omegaup.com/arena/problem/Formula-Recursiva-Seis
//
// © Jose Garfias Lopez
//

#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

ll f(ll n) {
    ll x = 1;
    if (n <= 20) {
        x = 1;
    } else {
        x = f(n-5) + 5 + n;
    }
    return x;
}

int main() {
    ll n;
    cin>>n;
    cout<<f(n)<<endl;
    return (0);
}