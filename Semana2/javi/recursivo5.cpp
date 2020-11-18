#include <iostream>
using namespace std;

int func(int n, int m){
  if(n == 1){
    return -1 * func(n - 2, m);
  }

  if(n > 3){
    return 2 + func(n-1, m);
  }
  return 2 * m;
}


int main (){
  int n;
  int m;
  cin >> n >> m;
  int total = func(n,m);
  cout << total;
}