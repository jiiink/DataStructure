// 수행시간 측정하는 함수

#include <functional>  // 이걸 사용해야 function을 변수로 넘길 수 있어요.
#include <bits/stdc++.h>
#define  allout(MSG,X)   std::cout<<"\n"<<MSG<<" ";for(auto w:X)std::cout<<w<<", "
using namespace std ;

#define N 10000000  // 반복횟수 , 천만번

#define TEST(OP) \
mybegin = chrono::system_clock::now();\
for (i = 1; i < N ; ++i) ic = ia OP ib OP i ;\
myend   = chrono::system_clock::now();\
sec = myend - mybegin;\
tsec = sec.count();\
cout << " Time: "<< tsec << endl;



int main(){
    chrono::system_clock::time_point mybegin, myend ;
    chrono::duration<double,milli> sec ;
    double tsec ;
    int          ia=2,   ib=3,   ic=4;
    long long    la=2,   lb=3,   lc=4;
    float        fa=1.2, fb=2.3, fc=3.4;
    double       da=2.3, db=3.4, dc=4.5;
    long double  wa=2.3, wb=3.4, wc=3.5;
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
for (i = 1; i < N; ++i)  lc = la OP lb OP i;\
myend   = chrono::system_clock::now();\
sec = myend - mybegin;\
tsec = sec.count();\
cout << " Time: "<< tsec << endl;

    cout << "\n Execution Time for Long-Long Integer Computation \n" ;
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
for (i = 0; i < N; ++i)fc += fa OP fb OP  i ;\
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
for (i = 1; i < N; ++i)dc += da OP db OP i ;\
myend   = chrono::system_clock::now();\
sec = myend - mybegin;\
tsec = sec.count();\
cout << " Time: "<< tsec << endl;

    cout << "\n Execution Time for Double Computation \n" ;
    cout << "+ "; TEST(+);
    cout << "* "; TEST(*);
    cout << "/ "; TEST(/);
    cout << "=="; TEST(==);

#undef TEST
#define TEST(OP) \
mybegin = chrono::system_clock::now();\
for (i = 1; i < N; ++i)wc += wa OP wb OP i;\
myend   = chrono::system_clock::now();\
sec = myend - mybegin;\
tsec = sec.count();\
cout << " Time: "<< tsec << endl;

    cout << "\n Execution Time for Long-double Computation \n" ;
    cout << "+ "; TEST(+);
    cout << "* "; TEST(*);
    cout << "/ "; TEST(/);
    cout << "=="; TEST(==);

double acos(double x) ; //: Returns the arc cosine of x in radians.
double asin(double x) ; //: Returns the arc sine of x in radians.
double atan(double x) ; //: Returns the arc tangent of x in radians.
double atan2(double y, double x) ; //
double cos(double x) ; //
double cosh(double x) ; //: Returns the hyperbolic cosine of x.
double sin(double x); //
double sinh(double x) ; //: Returns the hyperbolic sine of x.
double tanh(double x) ; //: Returns the hyperbolic tangent of x.

double exp(double x) ; //: Returns the value of e raised to the xth power.
double frexp(double x, int *exponent); // : The returned value is the mantissa and the integer pointed to by exponent is the exponent. The resultant value is x = mantissa * 2 ^ exponent.
double ldexp(double x, int exponent); // : Returns x multiplied by 2 raised to the power of exponent.
double log(double x) ; //: Returns the natural logarithm (base-e logarithm) of x.
double log10(double x) ; //: Returns the common logarithm (base-10 logarithm) of x.

double modf(double x, double *integer) ; // : The returned value is the fraction component (part after the decimal), and sets integer to the integer component.
double pow(double x, double y) ; //: Returns x raised to the power of y.
double sqrt(double x) ; //: Returns the square root of x.
double ceil(double x) ; //: Returns the smallest integer value greater than or equal to x.
double fabs(double x) ; //: Returns the absolute value of x.
double floor(double x); // : Returns the largest integer value less than or equal to x.
double fmod(double x, double y) ; //: Returns the remainder of x divided by y.

#define Math(X) \
mybegin = chrono::system_clock::now();\
for (i = 0; i < N; ++i) dc=X(++da+db--);\
myend   = chrono::system_clock::now();\
sec = myend - mybegin;\
tsec = sec.count();\
cout << " Time: "<< tsec << endl;

    cout << "\n Execution Time for math( ) function \n" ;
    cout << "> cos( ) " ; Math(cos);
    cout << "> sin( )  "; Math(sin);
    cout << "> cosh( ) "; Math(cosh);
    cout << "> asin( ) "; Math(asin);
    cout << "> acos( ) "; Math(acos);
    cout << "> exp( ) " ; Math(exp);
    cout << "> log( ) " ; Math(log);
    cout << "> log10( )"; Math(log10);
    cout << "> sqrt( ) "; Math(sqrt);
    cout << "> fabs( ) "; Math(fabs);
    cout << "> abs( )  "; Math(abs);
    cout << "> ceil( ) "; Math(ceil);



#define Math2(X) \
mybegin = chrono::system_clock::now();\
for (i = 0; i < N; ++i) dc=X(++da,--db);\
myend   = chrono::system_clock::now();\
sec = myend - mybegin;\
tsec = sec.count();\
cout << " Time: "<< tsec << endl;

    cout << "\n Execution Time for math(a,b) function \n" ;
    cout << "> pow( ) "   ; Math2(pow);
    cout << "> fmod( ) "  ; Math2(fmod);
    cout << "> atan2( ) " ; Math2(atan2);
	return 0;

} // end of main( )
