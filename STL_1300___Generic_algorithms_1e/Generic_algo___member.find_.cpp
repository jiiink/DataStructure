// string.find( ) 함수를 generic find( )와 비교해본다.
/*
 npos is a static member constant value with the greatest possible
 value for an element of type size_t.
 This value, when used as the value for a len (or sublen)
 parameter in string's member functions, means "until the end of the string".

 As a return value, it is usually used to indicate no matches.
 This constant is defined with a value of -1, which because size_t
 is an unsigned integral type, it is the largest possible representable value for this type.
 */

#include <iostream>       //cout
#include <string>         //string
#include <vector>

using namespace std ;

int main () {
    string str  ("There are two needles in this haystack with needles.");
    string kstr ("아무나 쉽게 편하게 프로그램할 수 있는 것은 아니다.");
    string str2 ("needle");


    size_t found = str.find(str2);
    if (found != string::npos)   // npos는 no string matching
        cout << "\n 첫번째 'needle' 단어 발견 위치 : " << found ;

    found = str.find("needles are small",found+1,6);  // 탐색구간 지정
    if (found != string::npos)
        cout << "\n 두번째 'needle' 단어 발견 위치 : " << found ;

    found = str.find("Hehehe");
    if (found != string::npos)
          cout << "\n 'Hehehe' 단어가 발견 : " << found ;
    else  cout << "\n 'Hehehe' 단어가 없음 : "  ;


    // 스트링을 교체해보자.
    str.replace(str.find(str2),str2.length(),"preposition");
    cout << "\n "<< str << '\n';

    vector <string> kchar = {"편", "는", "것", "니", "프"} ;


    for( auto w : kchar )
		 found = kstr.find(w);
         if (found != string::npos)   // npos는 no string matching
			cout << "\n " << w << "  at " << found ;
         else cout << "\n " << w << "가 없습니다. " << found ;
    return 0;
}
