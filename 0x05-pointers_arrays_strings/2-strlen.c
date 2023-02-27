#include "main.h"

/**
 * _strlen - return the length of chars.
 * @s: input char.
 * Return: length of a char.
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
