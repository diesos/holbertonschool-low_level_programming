#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - randomize a number and assign this value to n.
* Return: print the sign value of n
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		printf("%d is negative\n", n);
	else if (n == 0)
		printf("0 is zero\n");
	else
		printf("%d is positive\n", n);
	return (0);
}
