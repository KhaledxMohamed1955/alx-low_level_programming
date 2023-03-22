#include "function_pointers.h"

/**
 * array_iterator - executes a function on an array.
 * @array: array.
 * @size: size.
 * @action: pointer.
 * Return: array.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
