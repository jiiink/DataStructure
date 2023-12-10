#include<iostream>
#include<map>

using namespace std;

int main(void){

    multimap < string, string > alias;
    alias.insert(pair< string, string>("±èÅÂ±Õ", "±èº°¸í") );
    alias.insert(pair< string, string>("±èÅÂ±Õ", "±è¸»ÄÚ") );
    alias.insert(pair< string, string>("±èÅÂ±Õ", "¸ö°³±×") );
    alias.insert(pair< string, string>("¼Õ¾Æ¼·", "¸ÚÂî³ª") );
    alias.insert(pair< string, string>("ÀÌ´ëÈ£", "µÅ¶ûÀÌ") );
    alias.insert(pair< string, string>("ÀüÁØ¿ì", "°í±¸¸¶") );
    alias.insert(pair< string, string>("ÀÌ´ëÈ£", "¹éµÅÁö") );

    multimap <string, string>::iterator iter;

    cout << "\n alias.size() = " << alias.size() ;
    cout << "\n alias.count(40) = " << alias.count("±èÅÂ±Õ") ;



    cout << "\n ÀüÃ¼¸¦ ¸ğµÎ Ãâ·ÂÇØº¸ÀÚ. \n" ;
    for(iter = alias.begin(); iter != alias.end(); iter++){
        cout << "\n [" << iter->first << ", " << iter->second << "] " ;
    }

    return 0;
}


