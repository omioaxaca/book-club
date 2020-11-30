// compile & run:     g++ -std=c++11 main.cpp -o main && ./main < input.txt > out.txt
// Problem Url: https://cses.fi/problemset/task/1069
//
// © Jose Garfias Lopez
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    string repeatedString = "";
    cin>>repeatedString;

    char lastSeen = ' ';
    int maxLength = INT_MIN;
    int maxTempLength = 0;

    for (char c : repeatedString) {
        if (c == lastSeen) {
            maxTempLength++;
        } else {
            maxTempLength = 1;
            lastSeen = c;
        }
        maxLength = max(maxLength, maxTempLength);
    }

    cout<<maxLength<<endl;

    return (0);
}
