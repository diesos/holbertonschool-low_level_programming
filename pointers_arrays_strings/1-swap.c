/**
 * swap_int - swapping value of 2 pt integer
 * @a: pointer int n
 * @b: pointer int n
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int i;

	i = 0;

	i = *a;
	*a = *b;
	*b = i;
}
