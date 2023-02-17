#include <stdio.h>

/**
 * main - Reversed alphabet with a loop and reverse order.
 *
 * Return: Will always return 0
 */
int main(void)
{
	int i;

	for (i = 122; i > 96; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
