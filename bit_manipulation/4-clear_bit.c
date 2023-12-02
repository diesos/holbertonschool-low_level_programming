#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: number to clear
 * @index: position to clear
 * Return: return 1 if it worked or -1 if an error occured
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
    if (index > 32)
        return (-1);

    *n = ~(1 << index) & *n;

    return (1);
}