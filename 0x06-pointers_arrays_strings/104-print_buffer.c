#include "main.h"
#include <stdio.h>

/**
 * print_buffer - check this code.
 * @b: buffer.
 * @size: size.
 * Return: size of buffer.
 */
void print_buffer(char *b, int size)
{
	int i, n, o;

	if (size <= 0)
		printf("\n");
	else
	{
		for (i  = 0; i < size; i += 10)
		{
			printf("%.8x:", i);
			for (n = i; n < i + 10; n++)
			{
				if (n % 2 == 0)
					printf(" ");
				if (n < size)
					printf("%.2x", *(b + n));
				else
					printf("  ");
			}
			printf(" ");
			for (o = i; o < i + 10; o++)
			{
				if (o >= size)
					break;
				if (*(b + o) < 32 || *(b + o) > 126)
					printf("%c", '.');
				else
					printf("%c", *(b + o));
			}
			printf("\n");
		}
	}
}
