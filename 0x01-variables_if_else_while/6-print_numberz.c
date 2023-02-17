#include <stdio.h>

/**
 * main - Will Print Numbers as an asci values.
 *
 * Return: Will always return 0
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
