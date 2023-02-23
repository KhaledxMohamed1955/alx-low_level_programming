#include"main.h"

/**
 * print_most_numbers - print numbers from 0 to 9 without 2 and 4.
 *
 * Return: 8 ints.
 */
void print_most_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		if (n != 50 && n != 52)
		{
			_putchar(n);
		}
	}
	_putchar('\n');
}
