#include <stddef.h>

/**
 * binary_to_uint - Converts a binary string to an unsigned int.
 * @b: Pointer to a string of 0 and 1 characters.
 * Return: converted number or 0.
 */
unsigned int	binary_to_uint(const char *b)
{
	unsigned int	result;

	if (b == NULL)
		return (0);
	result = 0;
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		result = result * 2 + (*b - '0');
		b++;
	}
	return (result);
}
