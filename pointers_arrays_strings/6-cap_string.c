#include "main.h"
#include <stdio.h>

/**
 * cap_String - transform to uppercase every first letter of word
 * @s: pointor of char string
 *
 * Return: nothing.
 */

char *cap_string(char *s)
{
    int i = 0;

    while (s[i] != '\0')
    {
        if (s[i] == 9 || s[i] == 32 || s[i] == 44 || (s[i] >= 59 && s[i] <= 63) || s[i] == 123 || s[i] == 125 || (s[i] >= 40 && s[i] <= 41) || (s[i] >= 44 && s[i] <= 46) || (s[i] >= 32 && s[i] <= 34))
        {
            i++;
			if (s[i] == 9 || s[i] == 32 || s[i] == 44 || (s[i] >= 59 && s[i] <= 63) || s[i] == 123 || s[i] == 125 || (s[i] >= 40 && s[i] <= 41) || (s[i] >= 44 && s[i] <= 46) || (s[i] >= 32 && s[i] <= 34))
			{
				i++;
				if (s[i] >= 97 && s[i] <= 122)
					s[i] = s[i] - 32;
			}
			if (s[i] >= 97 && s[i] <= 122)
				s[i] = s[i] - 32;
		}
        i++;
    }

    return s;
}
