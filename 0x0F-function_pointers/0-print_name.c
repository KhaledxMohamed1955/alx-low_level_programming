#include "function_pointers.h"

/**
 * print_name - prints a name.
 * @name: name.
 * @f: function pointer.
 * Return: name.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}