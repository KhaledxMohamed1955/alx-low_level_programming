#include "main.h"

/**
 * _pow_recursion - the power of x.
 * @x: base integer.
 * @y: exponent integer.
 * Return: exponentiation value.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}

