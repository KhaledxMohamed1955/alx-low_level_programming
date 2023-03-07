#include "main.h"

/**
 * set_string - take the value of a pointer and put it in a char.
 * @s: source.
 * @to: target.
 * Return: pointer.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
