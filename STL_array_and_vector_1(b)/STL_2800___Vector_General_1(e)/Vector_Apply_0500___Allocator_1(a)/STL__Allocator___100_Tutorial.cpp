#include <bits/stdc++.h>
using namespace std;


int main(){

  cout << "설명을 시작합니다." << endl;

  allocator<int> intAlloc;
  cout << "1. intAlloc.max_size(): " << intAlloc.max_size() << endl;

  int* intArray = intAlloc.allocate(100);  // 100개를 만듬.
  cout << "2. Sizeof(intArray): " << sizeof(intArray) << endl;
  cout << "3. intArray[0]: " << intArray[0] << endl;
  cout << "4. intArray[4]: " << intArray[4] << endl;
  intArray[4] = 2018;
  cout << "5. intArray[200]: " << intArray[200] << endl;

  intAlloc.deallocate(intArray, 100);
  allocator<double> doubleAlloc;
  cout << "\n doubleAlloc.max_size(): " << doubleAlloc.max_size() << endl;

  allocator<string> stringAlloc;
  cout << "\n stringAlloc.max_size(): " << stringAlloc.max_size() << endl;

  string* myString = stringAlloc.allocate(3);

  stringAlloc.construct(myString,     "-Hello-");
  stringAlloc.construct(myString + 1, "-World-");
  stringAlloc.construct(myString + 2, "-!-"    );

  cout << myString[0] << " " << myString[1] << " " << myString[2] << endl;

  stringAlloc.destroy(myString);
  stringAlloc.destroy(myString + 1);
  stringAlloc.destroy(myString + 2);
  stringAlloc.deallocate(myString, 3);

} // end of main()




