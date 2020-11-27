// compile & run:     g++ -std=c++11 main.cpp -o main && ./main < input.txt > out.txt
// Problem Url: https://cses.fi/problemset/task/1068
//
// © Jose Garfias Lopez
//

#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
  long long n;
  cin>>n;
 
  while(n != 1) {
    cout<<n<<" ";
    if (n%2 ==0) {
      n /= 2;
    } else {
      n = (n*3) + 1;
    }
  }
  cout<<n<<endl;
  return 0;
}