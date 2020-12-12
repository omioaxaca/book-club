// compile & run:     g++ -std=c++11 main.cpp -o main && ./main < input.txt > out.txt
// Problem Url:       https://omegaup.com/arena/problem/amigos/#problems
//
// © Jose Garfias Lopez
//

#include <bits/stdc++.h>

using namespace std;

int main() {

    int friendsCount;
    int queriesCount;
    map<string,int> nameKey;

    cin>>friendsCount;
    
    vector<vector<int>> relationships = vector<vector<int>> (friendsCount, vector<int>(friendsCount, 0));

    for (int i=0; i<friendsCount; i++) {
        string f;
        cin>>f;
        nameKey[f] = i;
    }

    for (int i=0; i<friendsCount; i++) {
        for (int j=0; j<friendsCount; j++) {
            int status;
            cin>>status;
            relationships[i][j] = status;
        }
    }

    cin>>queriesCount;

    for (int i=0; i<queriesCount; i++) {
        string firstFriend;
        string secondFriend;
        cin>>firstFriend;
        cin>>secondFriend;

        cout<<relationships[nameKey[firstFriend]][nameKey[secondFriend]]<<"\n";
    }

    return (0);
}
