#include <iostream>
using namespace std;

int func(int n){
  if(n <= 20){
    return 1;
  }
  return func(n-5) + 5 + n;
}

int main (){
  int n;
  cin >> n;
  int total = func(n);
  cout << total;
}