#include <iostream>
using namespace std;

int func(int n, int m){
  if(n == 5){
    return func(n - 2, m - 2) * 2;
  }

  if(n > 5){
    return func(n - 1, m - 1) + 2;
  }
  return 20;
}


int main (){
  int n;
  int m;
  cin >> n >> m;
  int total = func(n,m);
  cout << total;
}