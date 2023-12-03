#include <iostream>
#include <map>

int main() {

    std::multimap<char,int> obj;
    obj.insert ( std::pair<char,int>('a',100) );
    obj.insert ( std::pair<char,int>('a',100) );
    obj.insert ( std::pair<char,int>('b',100) );
    obj.insert ( std::pair<char,int>('b',200) );
    obj.insert ( std::pair<char,int>('b',300) );

    // Count occurrences of a key
    std::cout << " a: " << obj.count('a') << "\n b: " << obj.count('b')
              << "\n c: " << obj.count('x') << "\n";

    // Count occurrences of a value
    int val = 100, count = 0;
    for (const auto& entry : obj)
        if (entry.second == val) count++;

    std::cout << "Value " << val << " occurred " << count << " times." << std::endl;
}
