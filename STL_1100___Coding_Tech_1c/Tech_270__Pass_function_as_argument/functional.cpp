// g++ test.cpp --std=c++11
#include <functional>
#include <iostream>
using namespace std ;

double Combiner(double a, double b, function<double (double,double)> func){
  return func(a,b);
}

double Add(double a, double b){
  cout << "\n " << "In Add \n" ;
  return a+b;
}

double Mult(double a, double b){
  cout << "\n " << "In Mult \n" ;
  return a*b;
}

int main(){

  cout << Combiner(12,13, Add);
  cout << Combiner(12,13,Mult);
}
