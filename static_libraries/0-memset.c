#include "main.h"

char *_memset(char *s, char b, unsigned int n) {
    /* Implement your function here */
    /* For example: */
    for (unsigned int i = 0; i < n; ++i) {
        s[i] = b;
    }
    return s;
}
