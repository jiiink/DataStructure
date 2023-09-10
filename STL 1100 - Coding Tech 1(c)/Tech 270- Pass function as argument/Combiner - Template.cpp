// g++ test.cpp --std=c++11
#include <functional>
#include <iostream>
using namespace std ;

template<class T>
double Combiner(double a, double b, T func){
  return func(a,b);
}

int Add(int a, int b){
  cout << "\n " << "In Add : " ;
  return a+b;
}

double Mult(double a, double b){
  cout << "\n " << "In Mult : " ;
  return a*b;
}

int main(){

  cout << Combiner( 12,    13,     Add);
  cout << Combiner( 12.1,  13.2,  Mult);
}
