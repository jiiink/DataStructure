// 수행시간 측정하는 함수

#include <functional>  // 이걸 사용해야 function을 변수로 넘길 수 있어요.
#include <bits/stdc++.h>
#define  allout(MSG,X)   std::cout<<"\n"<<MSG<<" ";for(auto w:X)std::cout<<w<<", "
using namespace std ;


#define TEST(OP) \
mybegin = chrono::system_clock::now();\
for (i = 0; i < N ; ++i)ic += (ia++) OP ((ib--)+1);\
myend   = chrono::system_clock::now();\
sec = myend - mybegin;\
tsec = sec.count();\
cout << " Time: "<< tsec << endl;


int main(){
    chrono::system_clock::time_point mybegin, myend ;
    chrono::duration<double,milli> sec ;
    double tsec ;
    int          ia=2,   ib=3,   ic=4;
    float        fa=1.2, fb=2.3, fc=3.4;
    double       da=0.0, db=0.0, dc=0.0;
    int          N = 10000000;
    int i ;

    cout << "\n Execution Time for Integer Computation \n" ;
    cout << "+ "; TEST(+);
    cout << "- "; TEST(-);
    cout << "* "; TEST(*);
    cout << "/ "; TEST(/);
    cout << "% "; TEST(%);
    cout << ">>"; TEST(>>);
    cout << "<<"; TEST(<<);
    cout << "& "; TEST(&);
    cout << "| "; TEST(|);
    cout << "^ "; TEST(^);
    cout << "=="; TEST(==);

#undef TEST
#define TEST(OP) \
mybegin = chrono::system_clock::now();\
for (i = 0; i < N; ++i)fc += (fa++) OP ((fb--)+1);\
myend   = chrono::system_clock::now();\
sec = myend - mybegin;\
tsec = sec.count();\
cout << " Time: "<< tsec << endl;

    cout << "\n Execution Time for float Computation \n" ;
    cout << "+ "; TEST(+);
    cout << "* "; TEST(*);
    cout << "/ "; TEST(/);
    cout << "=="; TEST(==);

#undef TEST
#define TEST(OP) \
mybegin = chrono::system_clock::now();\
for (i = 0; i < N; ++i)dc += (da++) OP ((db--)+1);\
myend   = chrono::system_clock::now();\
sec = myend - mybegin;\
tsec = sec.count();\
cout << " Time: "<< tsec << endl;

    cout << "\n Execution Time for double Computation \n" ;
    cout << "+ "; TEST(+);
    cout << "* "; TEST(*);
    cout << "/ "; TEST(/);
    cout << "=="; TEST(==);
	return 0;
} // end of main( )
