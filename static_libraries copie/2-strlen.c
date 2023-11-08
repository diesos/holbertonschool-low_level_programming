#include "main.h"

int _strlen(char *s) {
    /* Implement your function here */
    /* For example: */
    int length = 0;
    while (*s != '\0') {
        length++;
        s++;
    }
    return length;
}
