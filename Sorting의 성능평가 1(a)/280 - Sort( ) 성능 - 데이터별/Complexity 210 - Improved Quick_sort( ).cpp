#include <functional>  // 이걸 사용해야 function을 변수로 넘길 수 있어요.
#include <bits/stdc++.h>
#define  allout(MSG,X)   std::cout<<" "<<MSG<<" ";for(auto w:X)std::cout<<w<<", "
using namespace std ;

int partition( vector<int> &array, int low, int high) {
    int pivot = array[high];
    int i = (low - 1);

  for (int j = low; j < high; j++) {
    if (array[j] <= pivot) {
      i++;
      swap(array[i], array[j]);
    }
  }

  swap(array[i + 1], array[high]);
  return (i + 1);
}

void New_quick_sort( vector<int> &array, int low, int high) {
  if ( high - low > 6 ) {
    int pi = partition( array, low, high);
    New_quick_sort( array, low   , pi - 1);
    New_quick_sort( array, pi + 1, high  );
  } else  { // 잘라진 subfile의 크기가  10 이하이면 직접 sort
      sort( array.begin()+low, array.begin()+high+1 ) ;
  }
}



int main(){

    vector<int> my =    {6, 12, 3, 9, 8, 7, 1, 5, 4, 10, 11, 2, 4, \
    23, 43, 45, 11, 3, -9, 78, -12, 54, 33, -21, 6, -5 } ;

    allout("\n> Before insert_sort()= ", my ) ;
      New_quick_sort( my, 0, my.size( )-1) ;
    allout("\n> After  insert_sort()= ", my ) ;


}
