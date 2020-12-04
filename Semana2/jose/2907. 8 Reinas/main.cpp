// compile & run:     g++ -std=c++11 main.cpp -o main && ./main < input.txt > out.txt
// Problem Url:       https://omegaup.com/arena/problem/8Reinas#problems
//
// © Jose Garfias Lopez
//

#include <bits/stdc++.h>

using namespace std;

bool allQueensAreValid(vector<pair<int,int>> &queens) {

    for (int i=0; i<queens.size(); i++) {
        for (int j=i+1; j<queens.size(); j++) {
            if ((queens[i].first == queens[j].first) || (queens[i].second == queens[j].second) || (abs(queens[i].first - queens[j].first) == abs(queens[i].second - queens[j].second))) {
                return false;
            }
        }
    }

    return true;
}

void placeQueen(int q, vector<pair<int,int>> queens, vector<vector<pair<int,int>>> &solutions) {
    // cout<<"placequeen "<< q << endl;

    if (solutions.size() > 0) return; // you already have 1 answer, just exit.

    if (q > 8) { // save solution.
        solutions.push_back(queens);
        return;
    }

    for (int i = 1; i <= 8; i++) {
        for (int j = 1; j <= 8; j++) {

            vector<pair<int,int>> queensCopy(queens);
            pair<int,int> newQueen = make_pair(i,j);
            queensCopy.push_back(newQueen);
            
            if (allQueensAreValid(queensCopy)) {
                placeQueen(q+1, queensCopy, solutions);
            }

        }
    }

    return;
}

int main() {
    int queensSize;
    vector<pair<int,int>> queens = vector<pair<int,int>>();
    
    cin>>queensSize;

    for (int i=0; i<queensSize; i++) {
        int x,y;
        cin>>x>>y;
        queens.push_back(make_pair(x,y));
    }
    vector<vector<pair<int,int>>> solutions;
    placeQueen(queensSize + 1, queens, solutions);

    //cout<<"solutions: " << solutions.size()<<endl;
    if (solutions.size() > 0) {
        for (int i=0; i<solutions[0].size(); i++) {
            cout<<solutions[0][i].first<<" "<<solutions[0][i].second<<"\n";
        }
    } else {
        cout<<0<<"\n";
    }


    return (0);
}
