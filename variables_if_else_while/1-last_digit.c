#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - randomize a number and assign this value to n.
* Return: print the n value, and its last digit. Check if >5 || 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n % 10 > 0 && n % 10 < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0", n, n % 10);
	if (n % 10 > 5)
		printf("The last digit of %d is %d and is greater than 5", n, n % 10);
	if (n == 0)
		printf("Last digit of %d is 0 and is 0", n);
	return (0);
}
