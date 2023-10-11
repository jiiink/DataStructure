#include <bits/stdc++.h>  //코딩평가할 때 사용
#define allout(MSG,X)   cout<<"\n"<<MSG<<" ";for(auto w:X)cout<<w<<", "

using namespace std ;



int main() {

      vector<int> apple  ;
      vector<int> banana ;
      vector<int>  mango, tango ;

      cout << "\n\n Vector= {a,b,c,d,e} 작업하기 - Python-Like 동작 \n" ;
      banana= {4, 5, 6} ;  // 이게 된다니까요.. ㅎㅎㅎ C에서는 꿈도 못꾸는 것
      allout ( " banana[] = ", banana ) ;

      mango = {11, 12, 13, 14} ;
      tango = mango ;
      tango.back() = -100 ;
      allout ( "mango[] = ", mango ) ;
      allout ( "tango[] = ", tango ) ;

      cout << "\n\n List= {a,b,c,d,e} 작업하기 - Python-Like 동작 \n" ;

      list<int> lapple  ;
      list<int> lbanana ;
      list<int>  lmango, ltango ;


      lbanana= {4, 5, 6} ;  // 이게 된다니까요.. ㅎㅎㅎ C에서는 꿈도 못꾸는 것
      allout ( " lbanana[] = ", lbanana ) ;

      lmango = {11, 12, 13, 14} ;
      ltango = lmango ;
      ltango.back() = -100 ;
      allout ( " lmango[] = ", lmango ) ;
      allout ( " ltango[] = ", ltango ) ;


}


