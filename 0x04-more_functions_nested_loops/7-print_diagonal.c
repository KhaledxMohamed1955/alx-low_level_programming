#include"main.h"

/**
 * print_diagonal - print lines in diagonal shape.
 * @n: integer.
 * Return: lines.
 */
void print_diagonal(int n)
{
	int i, x;

	for (i = 0; i < n; i++)
	{
		for (x = 0; x < i; x++)
		{
			_putchar(' ');
		}
		_putchar(92);
		if (i < (n - 1))
		{
			_putchar('\n');
		}
	}
	_puchar('\n');
}
