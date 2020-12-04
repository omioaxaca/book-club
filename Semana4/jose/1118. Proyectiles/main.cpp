// compile & run:     g++ -std=c++11 main.cpp -o main && ./main < input.txt > out.txt
// Problem Url:       https://omegaup.com/arena/problem/Proyectiles#problems
//
// © Jose Garfias Lopez
//

#include <bits/stdc++.h>

using namespace std;

struct pair_hash {
    inline std::size_t operator()(const std::pair<int,int> & v) const {
        return v.first*31+v.second;
    }
};

int main() {
    int n,k;
    cin>>n>>k;

    unordered_set<pair<int,int>, pair_hash> board;

    // READ
    for (int i=0; i<n; i++) {
        int x,y;
        cin>>x>>y;
        board.insert(make_pair(x,y));
    }

    // PROCESS:
    for (int i=0; i<k; i++) {
        int x,y;
        cin>>x>>y;

        if (board.find(make_pair(x,y)) == board.end()) {
            cout<<"1"<<"\n";
        } else {
            cout<<"0"<<"\n";
        }
    }

    return (0);
}
