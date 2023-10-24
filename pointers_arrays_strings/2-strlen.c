/**
 * _strlen - get length of a string
 * @s: pointer char
 * Return: int number of length
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
