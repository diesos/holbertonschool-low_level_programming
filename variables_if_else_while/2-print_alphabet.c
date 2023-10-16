#include <stdio.h>

/**
* main - launch the program for printing.
* Return: return alphabet from 'a' to 'z' in lowercase
*/
int main(void)
{
	int i;

	i = 'a';
	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
