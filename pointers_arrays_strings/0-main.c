#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "ta geule\n";

    printf("%s\n", s1);
    printf("%s", s2);
    printf(_strcat(s1, s2));
    return (0);
}
