// 한글을 사용할 경우 ANSI-DOS encoding을 해야 한다.
// 또는 자신의 컴퓨터에 맞는 encoding 방법을 찾아야 한다.

#include <bits/stdc++.h>
#define allout(msg,lx)  cout<<"\n"<<msg<<" : ";for(auto &w : lx ) cout<< " " << w ;
#define deepout(msg,deepl)  cout<<"\n"<<msg<<" : \n";\
                            for(auto w : deepl ){cout<<"\n";for(auto q:w) cout<< " " << q ;}
using namespace std;

typedef string              Word ;
typedef list <Word>         Statement   ;
typedef list <Statement>    Paragraph   ;
typedef list <Paragraph>    Section     ;
typedef list <Section>      Book        ;

int main() {

    Statement s1 {"자료구조는", "정말", "재미있는", "과목인가?", "머라꼬?"} ;
    Statement s2 {"교수님", "정말", "짱짱맨", "그런데", "학생에게는", "과제", "살인마?"} ;

    allout( "문장 s1 = ", s1 ) ;
    allout( "문장 s2 = ", s2 ) ;
    Paragraph DS ;

    DS.push_back( s1 ) ;
    DS.push_back( s2 ) ;


    deepout( "\n 문단의 내용을 찍어보자", DS ) ;

	return 0;
}

