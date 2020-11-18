#include <iostream>
using namespace std;

int func(int n){
  if(n <= 5){
    return 1;
  }
  return func(n-2) * 5;
}


int main (){
  int n;
  cin >> n;
  int total = func(n);
  cout << total;
}