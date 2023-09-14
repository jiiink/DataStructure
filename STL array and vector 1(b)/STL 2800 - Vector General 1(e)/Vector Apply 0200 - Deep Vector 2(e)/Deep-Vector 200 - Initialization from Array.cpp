#include <bits/stdc++.h>
using namespace std;

#include "mytool.h"


int num[]={ 1,2,3,4,5,6,7,8,9,10, 11,12,13,  } ;

int main() {
    vector<int> va (num, num+10) ;
    printf("\n Size of num[] = %d ", sizeof(num)/4 ) ;

    dump("Vec from array=", va ) ;
} // END OF MAIN( )

