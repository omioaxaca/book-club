// compile & run:     g++ -std=c++11 main.cpp -o main && ./main < input.txt > out.txt
// Problem Url:       https://cses.fi/problemset/task/1618
//
// © Jose Garfias Lopez
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;

    // look for factors of 10 (5x2) in the expansion of the factorial.

    int zeros = 0;
    int power = 1;
    int zerosForPower = INT_MAX;

    while(zerosForPower > 1) {
        int fiveToPower = pow(5, power);
        // cout<<"fiveToPower"<<fiveToPower<<endl;
        zerosForPower = (n / fiveToPower);
        zeros += zerosForPower;
        power++;
    }

    cout<<zeros<<endl;

    return (0);
}
