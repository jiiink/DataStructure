#include <iostream>
#include <list>

using namespace std;

int main(void) {
   list<int> mylist = {1, 2, 3, 4, 5};
   int ii, *p = NULL;

   p = mylist.get_allocator().allocate(5);

   for (int i = 0; i < 5; ++i)
      p[i] = i + 100;

   cout << "List contains following elements" << endl;
   for (int i = 0; i < 5; ++i)
      cout << p[i] << endl;

   ii=0 ;
   for(auto it= mylist.begin() ; it != mylist.end() ; it++ ) {
    ii++ ;
    cout << "\n " << ii << "= " << *it ;
   }

   return 0;
}
