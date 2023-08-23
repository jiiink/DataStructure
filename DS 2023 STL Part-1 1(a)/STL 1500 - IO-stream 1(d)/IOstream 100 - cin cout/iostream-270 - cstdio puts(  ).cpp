#include <cstdio>
#include <cstring>

using namespace std;

int main() {

    int c;
    FILE *fp;
    fp = fopen("Zoh.txt", "w");

    char str[20] = "Hello World!";

    if (fp) {
        for(int i=0; i<strlen(str); i++)
            putc(str[i],fp);
    }
    fclose(fp);
}
