#include"main.h"

/*
 * _isupper - Checks if upper case or not.
 * @c: input char.
 * Return: 0 if true, 1 if false
 */
int _isupper(int c)
{
	if (c >= 65)
	{
		return (1);
	}
	else if (c <= 90)
	{
		return (0);
	}
}
