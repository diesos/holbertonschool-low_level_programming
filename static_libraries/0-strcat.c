#include "main.h"

char *_strcat(char *dest, char *src) {
    /* Implement your function here */
    /* For example: */
    int i = 0;
    while (dest[i] != '\0') {
        i++;
    }
    int j = 0;
    while (src[j] != '\0') {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return dest;
}
