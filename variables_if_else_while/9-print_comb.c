#include <stdio.h>
/**
* main - prints all possible combinations of single-digit numbers..
* Return: zero and exit program.
*/
int main(void)
{
	int i;

	i = '0';
	while (i <= '8')
	{
		putchar(i);
		putchar(',');
		putchar(' ');
		i++;
	}
	putchar('9');
	return (0);
}
