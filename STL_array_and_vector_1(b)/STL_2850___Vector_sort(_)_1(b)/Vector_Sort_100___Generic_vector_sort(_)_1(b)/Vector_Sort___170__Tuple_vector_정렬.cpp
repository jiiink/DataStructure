#include <tuple>
#include <vector>
#include <algorithm>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<tuple<int, float, char>> v;

int main() {
  v.push_back(std::make_tuple(1, 1.2, 'c'));
  v.push_back(std::make_tuple(2, 1.9, 'e'));
  v.push_back(std::make_tuple(1, 2.7, 'd'));
  v.push_back(std::make_tuple(2, 1.4, 'c'));
  v.push_back(std::make_tuple(1, 1.6, 'e'));
  v.push_back(std::make_tuple(2, 2.7, 'd'));
  v.push_back(std::make_tuple(1, 1.2, 'f'));
  v.push_back(std::make_tuple(3, 2.9, 'e'));
  v.push_back(std::make_tuple(1, 1.2, 'd'));

  sort(v.begin(),v.end(),
       [](const tuple<int,float,char>& a,
       const tuple<int,float,char>& b) -> bool
       {
         return std::get<1>(a) < std::get<1>(b);
       });

  for(auto w: v ){
    cout << "\n" << setw(5) << get<0>(w) <<  setw(5) << get<1>(w) <<  setw(5) << get<2>(w) ;
  }

  return 0;
}
