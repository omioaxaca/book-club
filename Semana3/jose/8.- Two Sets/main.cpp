// compile & run:     g++ -std=c++11 main.cpp -o main && ./main < input.txt > out.txt
// Problem Url: https://cses.fi/problemset/task/1092
//
// © Jose Garfias Lopez
//

#include <bits/stdc++.h>
 
using namespace std;

typedef long long i64;
 
int main() {
  int n;
  cin>>n;
  i64 sum = ((float)(1+n) / 2.0) * n;

  if (sum % 2 == 0) {
    cout<<"YES"<<endl;


    unordered_set<i64> firstSet;
    unordered_set<i64> secondSet;

    i64 half = sum / 2;
    i64 currentHalf = 0;
    for (int i=n; i>=1; i--) {
      currentHalf += i;
      if (currentHalf < half) {
        firstSet.insert(i);
      } else {
        currentHalf -= i;
        break;
      }
    }
    firstSet.insert(half - currentHalf);

    for (int i=1; i<=n; i++) {
      if (firstSet.find(i) == firstSet.end()) {
        secondSet.insert(i);
      }
    }

    cout<<firstSet.size()<<endl;
    for (auto it : firstSet) {
      cout<<it<<" ";
    }
    cout<<endl;


    cout<<secondSet.size()<<endl;
    for (auto it : secondSet) {
      cout<<it<<" ";
    }
    cout<<endl;

  } else {
    cout<<"NO"<<endl;
  }
  return 0;
}