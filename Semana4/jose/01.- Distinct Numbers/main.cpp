// compile & run:     g++ -std=c++11 main.cpp -o main && ./main < input.txt > out.txt
// Problem Url:       https://cses.fi/problemset/task/1621
//
// © Jose Garfias Lopez
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    set<int> numbers;

    for (int i=0; i<n; i++) {
        int x;
        cin>>x;
        numbers.insert(x);
    }

    cout<<numbers.size()<<endl;
    return (0);
}
