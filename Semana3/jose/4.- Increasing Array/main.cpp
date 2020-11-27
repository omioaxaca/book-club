// compile & run:     g++ -std=c++11 main.cpp -o main && ./main < input.txt > out.txt
// Problem Url: https://cses.fi/problemset/task/1094
//
// © Jose Garfias Lopez
//

#include <bits/stdc++.h>

using namespace std;

typedef long long i64;

int main() {
    int n;
    vector<int> numbers;
    
    // READ
    cin>>n;
    for (int i=0; i<n; i++) {
        int temp;
        cin>>temp;
        numbers.push_back(temp);
    }

    // PROCESS
    int lastGreater = INT_MIN;
    i64 turns = 0;

    for (int i=0; i<numbers.size(); i++) {
        if (numbers[i] > lastGreater) {
            lastGreater = numbers[i];
        } else {
            turns += lastGreater - numbers[i];
        }
    }

    // PRINT
    cout<<turns<<endl;
    return (0);
}
