#include <stdio.h>

/**
* main - launch the program for printing alphabet without 'q'& 'e'.
* Return: return 0.
*/
int main(void)
{
	int i;

	i = 'a';
	while (i <= 'z')
	{	
		if (i == 'q' || i == 'e')
			i++;
		else
		{
			putchar(i);
			i++;
		}
	}
	putchar('\n');
	return (0);
}
