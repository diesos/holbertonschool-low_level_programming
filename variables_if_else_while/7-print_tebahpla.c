#include <stdio.h>

/**
* main - launch program and print reverse alphabet.
* Return: return 0.
*/
int main(void)
{
	int i;

	i = 'z';
	while (i >= 'a')
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
