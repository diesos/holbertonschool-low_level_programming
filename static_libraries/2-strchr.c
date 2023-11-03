#include "main.h"

char *_strchr(char *s, char c) {
    /* Implement your function here */
    /* For example: */
    while (*s != '\0' && *s != c) {
        s++;
    }

    if (*s == c) {
        return s; // Found the character, return its address
    } else {
        return NULL; // Character not found, return NULL
    }
}
