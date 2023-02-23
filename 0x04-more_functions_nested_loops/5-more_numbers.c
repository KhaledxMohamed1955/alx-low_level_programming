#include"main.h"

/**
 * more_numbers - print ints from 0 to 14 numbers 10 times.
 *
 * Return: ints 0 to 14, 10 times.
 */
void more_numbers(void)
{
	int i, n;

	for (i = 0; i < 10; i++)
	{
		for (n = 0; n < 15; n++)
		{
			if (n >= 10)
			{
				_putchar((n / 10) + 48);
			}
			else
			{
				_putchar((n % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
