#include "main.h"

/**
 * reverse_array - reverses an array of integers.
 * @a: array.
 * @n: integers.
 * Return: reversed array.
 */
void reverse_array(int *a, int n)
{
	int i, k, temp;

	for (i = 0; i < n - 1; i++)
	{
		for (k = i + 1; k > 0; k--)
		{
			temp = *(a + k);
			*(a + k) = *(a + (k - 1));
			*(a + (k - 1)) = temp;
		}
	}
}
