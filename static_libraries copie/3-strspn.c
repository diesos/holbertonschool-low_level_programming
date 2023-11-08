#include "main.h"

unsigned int	_strspn(char *s, char *accept)
{
	unsigned int	count;
	int				found;

	/* Implement your function here */
	/* For example: */
	count = 0;
	while (*s != '\0')
	{
		found = 0;
		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				found = 1;
				break ;
			}
			accept++;
		}
		if (found)
		{
			count++;
		}
		else
		{
			break ;
		}
		s++;
		accept = original_accept; // Reset accept pointer to the beginning
	}
	return (count);
}
