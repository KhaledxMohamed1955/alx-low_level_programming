#include "main.h"

/**
 * _memset - check this code.
 * @s: area.
 * @b: byte.
 * @n: bytes.
 * Return: pointer.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) =  b;

	return (s);
}

