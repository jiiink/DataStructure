#include <bits/stdc++.h>
using namespace std;

list< list<char> > Atext ;
list< char > oneline ;

void init(){
  string lyric ;
  lyric = "Wednesdays Child Cries Alone" ;
  copy( lyric.begin(), lyric.end(), back_inserter( oneline ));
  Atext.push_back( oneline ) ;
  oneline.clear() ;
  lyric = "When you Smiled just for me you Smiled" ;
  copy( lyric.begin(), lyric.end(), back_inserter( oneline ));
  Atext.push_back( oneline ) ;
  oneline.clear() ;
  lyric = "For a while I Forgot" ;
  copy( lyric.begin(), lyric.end(), back_inserter( oneline ));
  Atext.push_back( oneline ) ;
}

void showtext(int seq, int i, int j){ //현재 커서의 위치 (i,j)
    int lineno = 1 ;
    int charno = 1;
    printf("\n\n Seq %2d ---------------", seq) ;
    for(auto w: Atext){
        printf("\n %d : ", lineno) ;
        charno = 1 ;
        for(auto s: w){
            if( i == lineno && charno == j) {
                      printf("_") ; }
            else printf("%c", s) ;
            ++charno ;
        }
        ++lineno ;
    }
}

int token(char x){
        switch( x ){
            case '<' : return( 10) ;
            case '>' : return( 20) ;
            case '[' : return( 30) ;
            case ']' : return( 40) ;
            case '-' : return( 50) ;
            case '$' : return(-50) ;
            default :
                       return(100) ;
        }
}  // end of token( )

int main () {
    char mychar ;

    init( ) ; // 3개의 문장을 준비함
    showtext(1, 1,1 );
    showtext(2, 2,5 );

    mychar = ' ' ;
    while( mychar != '$'){
        cout<< "\nCommand> " ;
        cin >> mychar ;
        cout << " token type=" << token(mychar) ;

    }

  return 0;
}

