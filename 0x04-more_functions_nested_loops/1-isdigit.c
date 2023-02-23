#include"main.h"

/*
 * _isdigit - Checks if a number is between 0 to 9.
 * @c: Number.
 * Return: 0 if true, 1 is false
 */
int _isdigit(int c)
{
	if (c >= 48)
	{
		return (1);
	}
	else if (c <= 57)
	{
		return (0);
	}
}
