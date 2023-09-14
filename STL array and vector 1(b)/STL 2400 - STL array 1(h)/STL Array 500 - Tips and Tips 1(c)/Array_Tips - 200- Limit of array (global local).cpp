#include <stdio.h>
#include <stdint.h>
#include <stddef.h>
#include <limits.h>

using namespace std;

#define N 4000       // N이 4000 한계
#define M 720        // 2치배열의 int 최대 허용크기 721

int garray[N][N] ;

void foo() {
   int w[500][500] ;
}

int main() {

    int larray[M][M] ; //  M이 790 안됨 800이 거의 한계

    for(int i = 0; i < N ; i++)
        for(int j = 0; j < N ; j++)
            if ((i+j)% N/2 == 0 ) {
               printf("\n i,j= %d %d", i, j ) ;
               garray[i][j] = i+ j ;
            }

  return 0;
}
