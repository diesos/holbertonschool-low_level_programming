#include "main.h"

/**
 * set_bit - function that set the value of a bit to 1 at a given index
 * @n: number
 * @index: index
 * Return: if it worked, or -1 if an error occured
 */

int set_bit(unsigned long int *n, unsigned int index)
{
    if (index > 32)
        return (-1);

    *n = (1 << index) | *n;

    return (1);
}