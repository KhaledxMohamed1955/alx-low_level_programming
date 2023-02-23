#include"main.h"

/**
 * print_triangle - print triangle.
 * @size: integer.
 * Return: triangle.
 */
void print_triangle(int size)
{
	int i, n;

	for (i = 0; i < size; i++)
	{
		for (n = 1; n < (size - i); n++)
			_putchar(' ');
		for (n--; n < size; n++)
			_putchar(35);
		for (i < (size - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
