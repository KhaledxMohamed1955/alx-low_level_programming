#include<stdio.h>
#include"main.h"
#define print_alphabet main
/**
 * main - Print the alphabet in lowerCase
 *
 * Return: Will always return 0
 */
void print_alphabet(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alphabet[i]);
	}
	putchar('\n');
}
