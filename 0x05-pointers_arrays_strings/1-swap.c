#include "main.h"

/**
 * swap_int - swaps the values of 2 integers.
 * @a: 1th integer.
 * @b: 2nd integer.
 * Return: Value of 2 integers .
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}

