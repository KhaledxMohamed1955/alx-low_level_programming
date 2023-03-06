#include "main.h"

/**
 * _strchr - locates a char in a string.
 * @s: string.
 * @c: char.
 * Return: pointer.
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
