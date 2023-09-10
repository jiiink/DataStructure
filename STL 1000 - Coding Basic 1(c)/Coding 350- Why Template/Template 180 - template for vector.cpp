#include <bits/stdc++.h>
using namespace std;


template<class C, class T>
auto contains1(const C& v, const T& x) -> decltype(end(v), true)
{
    return end(v) != std::find(begin(v), end(v), x);
}

template<typename T>
bool contains2( vector <T> v, T x){

	  if (v.empty())  return false;
      if (find(v.begin(), v.end(), x) != v.end())
           return true;
      else
           return false;


}


int main() {
	vector <float> vf = { 1.2, 2.3, 4.1, 5.44, 6.44, -0.34 } ;
	vector <int  > vi = { 12,  23, 41 ,  544,  644,   -34 } ;

	cout << "\n Contains1 = " << contains1(vf, 2.3) ;
	cout << "\n Contains2 = " << contains2(vf, 2.3) ;
	cout << "\n Contains1 = " << contains1(vf, 9.3) ;
	cout << "\n Contains1 = " << contains1(vi,  23) ;
	cout << "\n Contains2 = " << contains1(vi,  41) ;
	cout << "\n Contains1 = " << contains1(vi,  93) ;
	return 0;

} // end of main( )


