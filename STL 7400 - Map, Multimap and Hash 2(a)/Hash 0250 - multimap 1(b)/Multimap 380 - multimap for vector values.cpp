#include<iostream>
#include<map>
#include <iterator>
#include <algorithm>
#include <iostream>
using namespace std;


int main(){
    multimap <string, vector<string> > someMultimap;
    vector <string> someVector;
    string myout ;

    someVector.push_back("Good");
    someVector.push_back("Apple");
    someVector.push_back("Mango");
    someMultimap.insert(pair<string, vector<string> >("과일", someVector));
    someVector.push_back("Beer");
    someVector.push_back("Soju");
    someMultimap.insert(pair<string, vector<string> >("안주", someVector));

    multimap <string, vector<string> >::iterator it;

    for (it = someMultimap.begin(); it != someMultimap.end(); ++it) {
        cout << "\n Key= " << it->first << "\n" ;
        // copy( it->second.begin(), it->second.end(), ostream_iterator<string>(cout, ", "));
        for( auto myit = it->second.begin() ; myit != it->second.end() ;  myit++ ) {
            cout << "\n *myit=" << *myit ;
        };
        cout << "\n\n";
    } // end of for( )

} // end of main( )
