#include <stdio.h>

/**
* main - launch program and print 16 base in lowercase.
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
	i = 'a';
	while (i < 'g')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
