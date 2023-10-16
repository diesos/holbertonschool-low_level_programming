#include <stdio.h>

/**
* main - launch the program for printing numbers from 0 to 9, print new line.
* Return: zero and exit program.
*/
int main(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	printf("\n");
	return (0);
}
