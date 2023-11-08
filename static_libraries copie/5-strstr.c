#include "main.h"

char *_strstr(char *haystack, char *needle) {
    while (*haystack) {
        char *h = haystack;
        char *n = needle;
        while (*h && *n && *h == *n) {
            h++;
            n++;
        }
        if (*n == '\0') {
            return haystack; // Return the pointer to the start of the substring if found
        }
        haystack++;
    }
    return NULL; // Return NULL if no match is found
}
