// compile & run:     g++ -std=c++11 main.cpp -o main && ./main < input.txt > out.txt
// Problem Url:
//
// © Jose Garfias Lopez
//

#include <bits/stdc++.h>

using namespace std;

void search(vector<int> &rocks, int maxGold, int index, int currentGold, int &minCurrentGold) {
    
    if (currentGold >= maxGold) {
        minCurrentGold = min(minCurrentGold, currentGold);
    }
    
    for (int i=index+1; i<rocks.size(); i++) {
        search(rocks, maxGold, i, currentGold + rocks[i], minCurrentGold);
    }
}

int main() {
    
    int rocksTotal;
    vector<int> rocks;
    int maxGold;
    
    // READ
    cin>>rocksTotal;
    cin>>maxGold;
    
    for (int i=0; i<rocksTotal; i++) {
        int tmp;
        cin>>tmp;
        rocks.push_back(tmp);
    }
    
    // PROCESS
    
    int minCurrentGold = INT_MAX;
    
    for (int i=0; i<rocksTotal; i++) {
        search(rocks, maxGold, i, rocks[i], minCurrentGold);
    }
    
    // cout<<"minCurrentGold"<<minCurrentGold<<endl;
    
    int remainingRocks = minCurrentGold - maxGold;
    
    cout<<remainingRocks<<"\n";
    
    return (0);
}
