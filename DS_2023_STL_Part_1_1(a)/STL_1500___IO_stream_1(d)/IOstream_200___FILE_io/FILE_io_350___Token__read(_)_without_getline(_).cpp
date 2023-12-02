#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG<<":- ";for(auto w:X)cout<<w<<", "
using namespace std ;

class Token {
  private:
    friend ostream& operator<<(ostream&,Token const&);
    friend istream& operator>>(istream&,Token&);
    string     value;
};

istream& operator>>(istream& str,Token& data) {
    if (!str) {  return str;   }

    char    x;   // Drop leading space
    do { x = str.get();  } while(str && isspace(x) && (x != '\n'));

    // If the stream is done. exit now.
    if (!str) {  return str;  }

    // We have skipped all white space up to the
    // start of the first token. We can now modify data.
    data.value  ="";

    // If the token is a '\n' We are finished.
    if (x == '\n') {
        data.value  = "\n";
        return str;
    }

    // Otherwise read the next token in.
    str.unget();
    str >> data.value;

    return str;
}
ostream& operator<<(ostream& str,Token const& data) {
    return str << data.value;
}


int main() {
    ifstream   f("rotary.txt");
    Token   x;

    int i = 0 ;
    while(f >> x) {
      cout << "\n T[" << ++i << "]= " << x ;
    }
} // end of main( )
