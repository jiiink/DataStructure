#include <iostream>
#include <vector>
#include <array>
using namespace std ;


int main() {
  int n = 5, m = 3;
  vector<vector<int> >vec   (  n, vector<int>(m));
  array < array<int,3>, 5 >arr  ;


  for (int i = 0; i < n; ++i) {
    cout<< "i=  " << i << "  : "  ;
    for (int j = 0; j < m; ++j) {
      cout << &(vec[i][j]) << " ";
    }
    cout << "\n";
  }

  cout << "\n 이번은 미리 정해진 array에서 해보자 \n " ;
  for (int i = 0; i < n; ++i) {
    cout<< "i=  " << i << "  : "  ;
    for (int j = 0; j < m; ++j) {
      cout << &(arr[i][j]) << " ";
    }
    cout << "\n";
  }


} // end of main()
