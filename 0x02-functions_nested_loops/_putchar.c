#include <unistd.h>
#include "main.h"

/**
 * _putchar - Function file
 * 
 *
 * Return: Will always return 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

