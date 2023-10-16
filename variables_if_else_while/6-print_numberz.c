#include <stdio.h>

/**
* main - launch the program for printing digit from 0 to 9 with putchar'.
* Return: return 0.
*/
int main(void)
{
	int i;

	i = '0';
	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
