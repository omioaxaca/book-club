// compile & run:     g++ -std=c++11 main.cpp -o main && ./main < input.txt > out.txt
// Problem Url: https://omegaup.com/arena/problem/Formula-Recursiva-Cinco
//
// © Jose Garfias Lopez
//

#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

ll f(ll n, ll m) {
    if (n == 1) {
        return (-1 * (f((n-2), m)));
    } else if (n > 3) {
        return (2 + (f((n-1), m)));
    }
    return  (2 * m);
}

int main() {
    ll n, m;
    cin>>n>>m;
    cout<<f(n, m)<<endl;
    return (0);
}