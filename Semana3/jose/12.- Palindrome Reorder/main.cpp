// compile & run:     g++ -std=c++11 main.cpp -o main && ./main < input.txt > out.txt
// Problem Url:       https://cses.fi/problemset/task/1755
//
// © Jose Garfias Lopez
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    string palindromeCandidate;
    cin>>palindromeCandidate;

    bool evenChars = (palindromeCandidate.length() % 2 == 0);
    map<char,int> frequencies;
    
    for (int i=0; i<palindromeCandidate.length(); i++) {
        char letter = palindromeCandidate[i];
        if (frequencies.find(letter) == frequencies.end()) {
            frequencies[letter] = 1;
        } else {
            frequencies[letter]++;
        }
    }

    // We need to have Pair numbers in all the chars in order to get a palindrome. (just one odd)
    int odds = 0;
    int evens = 0;

    for (auto it: frequencies) {
        if (it.second % 2 == 0) {
            evens++;
        } else {
            odds++;
        }
    }

    //cout<<odds<<","<<evens<<endl;

    if (odds >= 2 || (odds == 1 && evenChars)) {
        cout<<"NO SOLUTION"<<endl;
    } else {
        // construct palindrome:
        string halfPalindrome = "";
        string reversedHalfPalindrome = "";
        char oddChar = ' ';
        int oddTimes = 0;
        for (auto it: frequencies) {
            // cout<<it.first<<","<<it.second<<endl;
            if (it.second % 2 == 0) {
                int times = it.second / 2;
                while(times --) {
                    halfPalindrome += it.first;
                    reversedHalfPalindrome += it.first;
                }
            } else {
                oddChar = it.first;
                oddTimes = it.second;
            }
        }
        reverse(reversedHalfPalindrome.begin(), reversedHalfPalindrome.end());


        if (evenChars) {
            cout<<halfPalindrome<<reversedHalfPalindrome<<endl;
        } else {
            cout<<halfPalindrome;
            while(oddTimes--) {
                cout<<oddChar;
            }
            cout<<reversedHalfPalindrome<<endl;
        }
    }

    return (0);
}
