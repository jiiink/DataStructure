#include <iostream>
#include <list>
using namespace std;

char* Allocate( list<char> arr, int size) { // allocate space for size(s) elements
    return arr.get_allocator().allocate(size);
}

void Construct(list<char> arr, char* point, int size) { // construct in-place on the array:
    for (int iter = 0; iter < size; ++iter)
        arr.get_allocator().construct(&point[iter], iter + 97);
}

void deAllocate(list<char> arr, char* point, int size) {
    for (int iter = 0; iter < size; ++iter)
        arr.get_allocator().destroy(&point[iter]);
    arr.get_allocator().deallocate(point, size);     // free allocated memory
}


int main() {  // Driver code
    list<char> larray;
    char* pointer;
    int size = 8;

    pointer = Allocate( larray, size);
    Construct(larray, pointer, size);

    cout << "LArray elements: ";
    for (int iter = 0; iter < size; ++iter)
        cout << pointer[iter] << " ";

    deAllocate(larray, pointer, size);

    return 0;
}

