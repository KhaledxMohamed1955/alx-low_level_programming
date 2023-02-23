#include"main.h"

/**
 * print_square - print #.
 * @size: integer.
 * Return: # * size.
 */
void print_square(int size)
{
	int i, n;

	for (i = 0; i < size; i++)
	{
		for (n = 0; n < size; n++)
		{
			_putchar(55);
		}
		if (i != size - 1)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
