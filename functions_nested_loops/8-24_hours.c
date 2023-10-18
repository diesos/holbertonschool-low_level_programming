#include "main.h"

/**
 * jack_bauer - print the clock min per min until 24:00
 * @void: void
 * Return: Always 0.
 */

void jack_bauer(void)
{
	int hour;
	int min;
	char sep;
	int i;
	int j;
	int k;
	int l;

	hour = 0;
	min = 0;
	sep = ':';
	j = 0;

	for (hour = 0; hour < 24; hour++)
	{
		for (min = 0; min < 60; min++)
		{
			i = hour / 10;
			j = hour % 10;
			k = min / 10;
			l = min % 10;
			_putchar('0' + i);
			_putchar(j + '0');
			_putchar(':');
			_putchar(k + '0');
			_putchar(l + '0');
			_putchar('\n');
			if (hour == 9)
				j++;
			if (hour == 19)
				j++;
		}
	}
}

