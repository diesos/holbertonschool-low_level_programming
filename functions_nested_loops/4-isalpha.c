#include "main.h"

/**
 * _isalpha - check if c is alphabetic or not
 * @c : for testin
 * Return: Always 0.
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
