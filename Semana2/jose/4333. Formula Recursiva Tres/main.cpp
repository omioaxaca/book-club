// compile & run:     g++ -std=c++11 main.cpp -o main && ./main < input.txt > out.txt
// Problem Url: https://omegaup.com/arena/problem/Formula-Recursiva-Tres
//
// © Jose Garfias Lopez
//

#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

ll f(ll n) {
    ll x = 1;
    if (n > 5) {
        x = f(n-2) * 5;
    }
    cout<<x<<endl;
    return x;
}

int main() {
    ll n;
    cin>>n;
    f(n);
    return (0);
}