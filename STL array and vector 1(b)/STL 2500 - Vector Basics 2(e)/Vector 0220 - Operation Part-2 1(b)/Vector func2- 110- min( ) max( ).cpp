#include <bits/stdc++.h>
#define allout(MSG,X)   std::cout<<"\n"<<MSG <<" : ";for(auto w:X)std::cout<<w<<", "
using namespace std;

int main() {

	vector<int> vec = { 13, 34, 2, 66, 78, 11, 32, 74, 25 };

	int xmin = *min_element( vec.begin(), vec.end());
	auto my  =  min_element( vec.begin(), vec.end());
	cout << " 최소원소의 위치(번째) = " <<  my - vec.begin( ) << endl  ;
	int xmax = *max_element( vec.begin(), vec.begin()+(vec.end()-vec.begin())/2 + 1 );

	cout << " 첫 1/2 구간 중에서 xmax : " << xmax << endl;
	cout << " xmin : " << xmin << endl;

}
