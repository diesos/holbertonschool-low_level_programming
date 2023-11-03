#include "main.h"

/**
 * is_prime_number - function to determine if n is prime
 * @n: integer to test
 * Return: 1 if n is prime, 0 else.
 */

int	is_prime_number(int n)
{
	if (n >= 2)
    {
        if (n == 3 || n == 2)
            return (1);
        if (n % 2 == 1)
            return (1);
	}
	else
        if (n % 2 == 0)
		return (0);
	return (0);
}
