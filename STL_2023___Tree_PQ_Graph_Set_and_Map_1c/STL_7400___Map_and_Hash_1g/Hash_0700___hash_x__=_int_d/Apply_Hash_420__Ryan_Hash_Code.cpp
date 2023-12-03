/* Copyright (c) 2015 Ryan McCullagh  */

#include <iostream>
#include <functional>
#include <string>
#include <math.h>
#include <stdio.h>
#include <stddef.h>

using namespace std ;

size_t stringLength(const char* source) {
    if(source == NULL) { return 0; }
    size_t length = 0;
    while(*source != '\0') {
        length++;
        source++;
    }
    return length;
}

static size_t getHash(const char* source) {
    size_t length = stringLength(source);
    size_t hash = 0;
    for(size_t i = 0; i < length; i++) {
        char c = source[i];
        int a = c - '0';
        hash = (hash * 10) + a;
    }

    return hash;
}

static const char *const testCases[] = {
    "this",
    "is",
    "a",
    "test",
    "but",
    "i",
    "should",
    "use",
    "real",
    "dictonary"
};

#define TABLE_SIZE (160000)

int main() {
    size_t name = getHash("Ryan McCullagh");
    printf("%zu\n", name);

    for(size_t i = 0; i < (sizeof(testCases) / sizeof(testCases[0])); i++) {
        const char* source = testCases[i];
        size_t hash = getHash(source);
        printf(" hash( %12s ) = %zu\n", source, (hash % TABLE_SIZE));

    }

    return 0;
}
