#include"main.h"

/**
 * leet - encodes string to integers.
 * @s: input string.
 * Return: Pointers.
 */
char *leet(char *s)
{
	int increment = 0, i;
	int lowerCaes[] = {97, 101, 111, 116, 108};
	int upperCaes[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	while (*(s + increment) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(s + increment) == lowerCase[i] || *(s + increment) == upperCase[i])
			{
				*(s + increment) = numbers[i];
				break;
			}
		}
		increment++;
	}

	return (s);
}

