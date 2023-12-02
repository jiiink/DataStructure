#include <bits/stdc++.h>
#include <functional>
using namespace std;



int main(int argc, char** argv) {
    array<int, 10> theList = {1,2,3,4,5,6,7,8,9,10};
    int evenSum = 0;
    int oddSum = 0;

    for_each(theList.cbegin(), theList.cend(), [&](int i)  {
        if (i%2 == 0)
            evenSum += i;
        else
            oddSum += i;
    });

    cout << "Sum of evens: " << evenSum << endl;
    cout << "Sum of odds: " << oddSum << endl;

    return 0;

}





