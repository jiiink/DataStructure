#include <iostream>
#include <map>

int main() {

    std::multimap<char,int> obj;
    obj.insert ( std::pair<char,int>('a',100) );
    obj.insert ( std::pair<char,int>('a',100) );
    obj.insert ( std::pair<char,int>('b',100) );
    obj.insert ( std::pair<char,int>('b',200) );
    obj.insert ( std::pair<char,int>('b',300) );
    obj.insert ( std::pair<char,int>('f',200) );
    obj.insert ( std::pair<char,int>('g',100) );


    // Count occurrences of a value
    int val = 100, count = 0;
    for (const auto& entry : obj){
        if (entry.second == val) {
                std::cout << "\n entry.first= " << entry.first << "ÀÇ value= "<< val;
                count++;
        }
    } // end of for( )

    std::cout << "\n Value " << val << " occurred " << count << " times." << std::endl;
}
