// compile & run:     g++ -std=c++11 main.cpp -o main && ./main < input.txt > out.txt
// Problem Url: https://cses.fi/problemset/task/1083
//
// © Jose Garfias Lopez
//

#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
  int n;
  cin>>n;
  long long sum = ((float)(1+n) / 2.0) * n;
  for (int i =1; i<n; i++) {
    int tmp;
    cin>>tmp;
    sum = sum - tmp;
  }
  cout<<sum<<endl;
  return 0;
}