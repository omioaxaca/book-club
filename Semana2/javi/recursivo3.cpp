#include <iostream>
using namespace std;

double func(double n){
  if(n <= 5){
    printf("1 \n");
    return 1;
  }
  double r = func(n-2) * 5;
  printf("%.0lf \n", r);
  return r;
}


int main (){
  double n;
  cin >> n;
  func(n);
}