#include "main.h"

/**
 * largest_number - Print the largest.
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: the largest.
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
