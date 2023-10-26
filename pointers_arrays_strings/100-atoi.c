#include "main.h"

/**
* _atoi - transform an ascii to an integer
* @s: char pointor for detecting atoi
* Return: int value mutply by the sign
*/

int _atoi(char *s)
{
	int i;
	int sign;
	int nb;

	i = 0;
	sign = 1;
	nb = 0;
	while (s[i] == ' ')
	{
		i++;
	}
	while (s[i] == '+' || s[i] == '-')
	{
		if (s[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		nb = nb * 10 + (s[i] - 48);
		i++;
	}
	return (nb * sign);
}
