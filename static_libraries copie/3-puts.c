#include "main.h"

void _puts(char *s)
{
    /* Implement your function here */
    /* For example: */
    while (*s != '\0') {
        putchar(*s);
        s++;
    }
}
