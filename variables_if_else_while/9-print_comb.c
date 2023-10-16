#include <stdio.h>
/**
* main - prints all possible combinations of single-digit numbers..
* Return: zero and exit program.
*/
int main(void)
{
	int i;

	i = '0';
	while (i <= '9')
	{
		putchar(i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
		else
			putchar('\n');
		i++;
	}
	return (0);
}
