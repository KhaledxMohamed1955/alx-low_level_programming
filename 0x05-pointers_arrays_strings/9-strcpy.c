#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies to another locations pointed in the terminal.
 * @dest: destination.
 * @src: source.
 * Return: output.
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
}
