#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG<<" ";for(auto w:X)cout<<w<<","
using namespace std;

int main() {

       vector <int>          vec  {  34,  35,  36,  37,  88 };
 const vector <int>    month_days { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

       vector <int>:: iterator viter ;
 const vector <int>:: iterator citer = vec.begin()+1 ;     // 고정 지시자, 지시자 자체가 바뀌지 않음,
       vector <int>:: const_iterator coniter = vec.end();  // 고정값 지시자,  지시자 대상의 값이 불변. 바꾸면 난리가 남.

       *citer *= -1 ; // iter가 가리키고 있는 데이터의 값을 변경하는 것은 가능합니다.
       //++citer;   // 그러나 iter가 가리키고 있는 것 자체는 변경 불가.
       allout(" 1. vec[] 내용 =", vec ) ;

       coniter = vec.end()-1 ;
       cout << "\n 2. *coniter = " << *coniter ;
       coniter = vec.end()-2 ;  // coniter의 값을 바꾸는 것은 가능
       cout << "\n 3. *coniter = " << *coniter ;
       coniter -= 1 ;
       vec[1] *= -10 ;
       vec[2] -= 10000 ;
       allout(" 메롱 vec[] 내용 =", vec ) ;
       cout << "\n 야 *coniter = " << *coniter ;
       // *coniter *= -1 ;  // 그러나 coniter의 값를 바꾸는 것을 불가능


       allout(" 4. vec[] 내용 =", vec ) ;

       cout << "\n 5. accumulate( vec ) =  " << accumulate( vec.begin(), vec.end(), 0 ) ;
       allout(" 6. vec[] 내용 =", vec ) ;
  return 0 ;

} // end of main()

