// compile & run:     g++ -std=c++11 main.cpp -o main && ./main < input.txt > out.txt
// Problem Url:       https://cses.fi/problemset/task/1622
//
// © Jose Garfias Lopez
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    // READ
    string letters;
    vector<string> permutationsLetters;

    cin>>letters;

    // PROCESS
    sort(letters.begin(), letters.end());

    permutationsLetters.push_back(letters);
    while(next_permutation(letters.begin(), letters.end())) {
        permutationsLetters.push_back(letters);
    }

    // PRINT
    cout<<permutationsLetters.size()<<endl;
    for (int i=0; i<permutationsLetters.size(); i++) {
        cout<<permutationsLetters[i]<<endl;
    }

    return (0);
}
