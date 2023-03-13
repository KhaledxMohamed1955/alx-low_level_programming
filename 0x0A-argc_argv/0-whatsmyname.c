#include <stdio.h>

/**
 * main - print a name.
 * @argc: number of arguaments.
 * @argv: an array.
 * Return: Return a 0 if success.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
