// compile & run:     g++ -std=c++11 main.cpp -o main && ./main < input.txt > out.txt
// Problem Url:
//
// © Jose Garfias Lopez
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    int doorsCount;
    int keysCount;
    unordered_map<int,int> doorsMap;

    cin>>doorsCount;
    for (int i=1; i<=doorsCount; i++) {
        int x;
        cin>>x;
        doorsMap[x] = i;
    }

    cin>>keysCount;
    for (int i=0; i<keysCount; i++) {
        int x;
        cin>>x;

        if (doorsMap.find(x) != doorsMap.end()) {
            cout<<doorsMap[x]<<" ";
        } else {
            cout<<"0 ";
        }
    }


    return (0);
}
