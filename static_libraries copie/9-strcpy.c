#include "main.h"

char *_strcpy(char *dest, char *src) {
    int i = 0;

    while (src[i] != '\0') {
        dest[i] = src[i]; // Copy each character from src to dest
        i++;
    }
    dest[i] = '\0'; // Null-terminate the destination string

    return dest;
}
