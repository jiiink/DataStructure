// No.2 Wording Vector 활용하기  STL


#include <bits/stdc++.h>       // Try Catch를 사용하기 위해서 넣어야 하는 헤드
using namespace std;

template < typename C >
void dump( const char *desc, C c) {
	cout.width(12);
	cout << left << desc << "==> ";
	copy(c.begin(),c.end(),ostream_iterator <typename C::value_type>(cout," "));
	cout << endl;
} // dump( ) template

vector<string> vecline;
vector<string> tmpvec ;
vector<string> vecarray(10) ;
vector<string>::iterator strit, vecit ;
vector< vector<string> > vecvec ; //  vector of vector : 이중벡터의 선언방법
vector< vector<string> >::iterator vecvecit ;
string mystr ;

int main(){

    cout << "비어있는 vector를 출력합니다." ;
    dump("vecline",     vecline  ) ;
    dump("vecarray",    vecarray ) ;

    cout << "\n 하나의 벡터 vecline[]의 뒤로 원소를 넣어 봅니다. " ;
    vecline.push_back(  "Jan"  ) ;
    vecline.push_back(  "Feb"  ) ;
    vecline.push_back(  "March") ;
    dump("\n 3개 입력후 vecline[] = ",  vecline ) ;

    vecvec.push_back( vecline );
    vecline.push_back(  "개") ;
    vecline.push_back(  "돼") ;
    vecline.push_back(  "지") ;
    dump("\n 개돼지를 넣은 후 vecline", vecline ) ;

    vecvec.push_back( vecline );     vecline.clear( ) ;
    vecvec.push_back( vecline );
    vecvec.push_back( vecline );

    vecline.push_back("Drink-and-Drink!") ;
    vecvec.push_back( vecline );  // vcline.resize( 0 ) ;
    dump("vecline", vecline ) ;

    dump("vecvec[0]", vecvec[0]) ;
    dump("vecvec[1]", vecvec[1]) ;
    dump("vecvec[2]", vecvec[2]) ;
    dump("vecvec[3]", vecvec[3]) ;
    dump("vecvec[4]", vecvec[4]) ;

    cout << "\n vecvec[1][2]=" << vecvec[1][3] ;
    cout << "\n vecvec[4][2]=" << vecvec[4][0] ;

    // 첫번째 vecvec의 첫 원소 vector의 제일 마지막 원소 출력하기
    vecvecit = vecvec.begin() ;
    tmpvec = (*vecvecit) ;
    cout << "\n 마지막 원소 표현 1 = " << *(tmpvec.end()-1)  ;
    cout << "\n 마지막 원소 표현 2 = " << *((*vecvecit).end()-1)  ;
}//End of Main
