#include <stdio.h>      /* printf */
#include <string.h>     /* strcat */
#include <stdlib.h>     /* strtol */

const char *byte_to_binary(int x) {
    static char b[33];
    b[0] = '\0';

    int z;  // 2^30 = 1073741824
    for (z = 1073741824 ; z > 0; z >>= 1) {
        strcat(b, ((x & z) == z) ? "1" : "0");
    }

    return b;
}

int main(void) {
    {   /* binary string to int */
        char *tmp;
        char *b = "0101";
        printf("%d\n", strtol(b, &tmp, 2));
    }

    {   /* byte to binary string */
        int i ;
        i= 16*16+1 ;
        printf(" %d ==> %s\n", i, byte_to_binary(i));
    }

    return 0;
}
