#include "function_pointers.h"

/**
 * int_index - find an integer in an array.
 * @array: array.
 * @size: size.
 * @cmp: compare two values of pointers.
 * Return: index of the first elemnet if true.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}

	return (-1);
}
