// unordered_multimap::find
// Searches the container for an element with k as key and returns an
// 있을 경우 iterator to it if found, otherwise it returns an iterator to unordered_multimap::end
// (the element past the end of the container).

#include <iostream>
#include <string>
#include <unordered_map>

int main () {
    std::unordered_multimap<std::string,std::string> mymap = {

        {"Pusan","돼지국밥"},
        {"Pusan","갈매기"},
        {"Kwangju","홍어회"},
        {"Seoul","피자"},
        {"Jeju","바람"}
    };

    std::cout << "\n 마지막 값 of Pusan' is: ";
    std::cout << mymap.find("Pusan")->second;
    std::cout << "\n mymap.size() is " << mymap.size() << std::endl;
    std::cout << std::endl;

    return 0;
}
