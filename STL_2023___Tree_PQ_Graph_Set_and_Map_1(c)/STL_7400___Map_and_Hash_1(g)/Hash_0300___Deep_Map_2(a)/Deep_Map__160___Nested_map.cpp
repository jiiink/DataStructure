#include <bits/stdc++.h>
using namespace std;

typedef map<string, double> Map1; //define maps and their data type
typedef map<string, Map1> Map2;
typedef map<string, Map2> Map3;

Map3 m;


void print(){

        map<string,   Map2>::iterator it_out;
        map<string,   Map1>::iterator it_mid;
        map<string, double>::iterator it_in;

        for(it_out = m.begin(); it_out != m.end(); it_out++){
           cout<<"{ "<<(*it_out).first<<", { "; //output 1st element of Map3

           for(it_mid=(*it_out).second.begin(); it_mid !=(*it_out).second.end(); it_mid++){
                cout<<(*it_mid).first<<",";  //output first element of Map2

                for(it_in=(*it_mid).second.begin(); it_in !=(*it_mid).second.end(); it_in++){
                       //output the 1st and 2nd elements of Map1
                       cout<< "{"<<(*it_in).first << ","<< (*it_in).second <<"}}"<<endl;
                    } // end of for( )
           } // end of for( it_mid=(*it_out) )
        } // end of for(it_out = m.begin() )


}  // end of print( )

int main(int argc, char* argv[]){

        m.insert (make_pair("el", Map2()));
        m["el"].insert (make_pair("nom", Map1()));
        m["el"]["nom"].insert (make_pair("Et", 25.0));
        m["el"]["nom"].insert (make_pair("Pt", 23.20));
        m["el"]["nom"].insert (make_pair("Charge", -1));

        print();

return 0;
}
