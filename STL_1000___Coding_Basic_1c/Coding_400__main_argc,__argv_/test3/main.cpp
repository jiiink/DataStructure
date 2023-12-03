// 특정 파일의 이름을 argv로 넘겨서 읽어내는 방법

#include <fstream>
#include <iostream>

using namespace std;

int main ( int argc, char *argv[] ) {

    if ( argc != 2 ) // argc가 2개가 아니면 argv[0]는 프로그램 이름 그 자체
        cout<<"usage: "<< argv[0] <<" <filename>\n";
    else { // We assume argv[1] is a filename to open
        ifstream the_file ( argv[1] );

        if ( !the_file.is_open() ) cout<<"Could not open file\n";
        else {
            cout << "----------begin-------------"     << endl ;
            char x; // the_file.get ( x ) returns false if the end of the file
               while ( the_file.get ( x ) )
                   cout<< x;
             cout << "---------end--------------"     << endl ;
        } // the_file is closed implicitly here

    } // end of if()

} // end of main()
