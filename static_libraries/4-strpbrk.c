#include "main.h"

char *_strpbrk(char *s, char *accept) {
    /* Implement your function here */
    while (*s) {
        char *c = accept;
        while (*c) {
            if (*s == *c) {
                return s; // Return the pointer to the first occurrence in s
            }
            c++;
        }
        s++;
    }
    return NULL; // Return NULL if no match is found
}
