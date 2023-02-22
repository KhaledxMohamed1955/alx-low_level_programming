#include<stdio.h>

/**
 * main - Will Print putchar.
 *
 * Return: Will always return 0
 */
int main(void)
{
	char var[8] = "_putchar";
	int i;

	for (i=0; i< 8; i++)
	{
		putchar(var[i]);
	}
	putchar('\n');
	return 0;
}
