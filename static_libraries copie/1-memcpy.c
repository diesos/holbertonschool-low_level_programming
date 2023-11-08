#include "main.h"

char *_memcpy(char *dest, char *src, unsigned int n) {
    /* Implement your function here */
    /* For example: */
    char *ptr = dest;
    while (n--) {
        *ptr++ = *src++;
    }
    return dest;
}
