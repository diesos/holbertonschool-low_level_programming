#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
    unsigned int count = 0;

    while (*s != '\0')
    {
        int found = 0;
        char *temp_accept = accept; // Create a temporary pointer to iterate through accept

        while (*temp_accept != '\0')
        {
            if (*s == *temp_accept)
            {
                found = 1;
                break;
            }
            temp_accept++;
        }

        if (found)
        {
            count++;
        }
        else
        {
            break;
        }

        s++;
    }

    return count;
}
