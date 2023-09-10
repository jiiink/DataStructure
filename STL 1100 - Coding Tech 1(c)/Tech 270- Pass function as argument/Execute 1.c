#include <stdio.h>

void print();
void execute(void());

int main() {
    execute(print); // sends address of print
    return 0;
}

void print() {
    printf("Hello ¿¤·Î¶ó°í  !");
}

void execute(void f()) { // receive address of print
    f();
}
