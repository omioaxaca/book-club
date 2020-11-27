// compile & run:     g++ -std=c++11 main.cpp -o main && ./main < input.txt > out.txt
// Problem Url:       https://cses.fi/problemset/task/1070
//
// © Jose Garfias Lopez
//

#include <bits/stdc++.h>

using namespace std;

int main() {

    // READ
    int n;
    cin>>n;

    // PROCESS
    vector<int> answer;
    if (n == 1 ) {
        cout<<1<<endl;
    } else if (n <= 3) {
        cout<<"NO SOLUTION"<<endl;
    } else if (n == 4) {
        for(int i=2; i<=n; i+=2) {
            answer.push_back(i);
        }
        for (int i=1; i<=n; i+=2) {
            answer.push_back(i);
        }
    }else {
        for (int i=1; i<=n; i+=2) {
            answer.push_back(i);
        }
        for(int i=2; i<=n; i+=2) {
            answer.push_back(i);
        }
    }

    // PRINT
    for (int i=0; i<answer.size(); i++) {
        cout<<answer[i]<<" ";
    }
    cout<<endl;

    return (0);
}
