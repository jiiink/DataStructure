#include <stdio.h>

int main() {
    unsigned long long int num = 285212672; //FYI: fits in 29 bits
    int normalInt = 5;

    printf("\n %llu은 %d 바이트. \n int값은 %llu .\n", num, sizeof(num), normalInt);
    return 0;
}
