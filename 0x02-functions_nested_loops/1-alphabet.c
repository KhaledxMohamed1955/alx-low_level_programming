#include"main.h"

/**
 * main - Print the alphabet in lowerCase
 *
 * Return: Will always return 0
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');;
}
