#include <stdio.h>

/**
 * main - Numbers printer
 *
 * Return: Will always retrun 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	putchar('\n');
	return (0);
}
