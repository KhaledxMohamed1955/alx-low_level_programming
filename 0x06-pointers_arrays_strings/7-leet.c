#include"main.h"

/**
 * leet - encodes string to integers.
 * @s: input string.
 * Return: Pointers.
 */
char *leet(char *s)
{
	int count = 0, i;
	int lowerCaes[] = {97, 101, 111, 116, 108};
	int upperCaes[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	while (*(s + count) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(s + count) == lowerCase[i] || *(s + count) == upperCase[i])
			{
				*(s + count) = numbers[i];
				break;
			}
		}
		count++;
	}

	return (s);
}

