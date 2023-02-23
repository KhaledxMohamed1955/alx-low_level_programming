#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - print how many days are left in the year.
 * @month: integer - month.
 * @day: integer - day.
 * @year: integer - year
 * Return: int.
 */

void print_remaining_days(int month, int day, int year)
{
	if (year % 4 == 0 || ((year % 100 == 0) && (year % 400 == 0)))
	{
		if (month > 2 && day >= 60)
		{
			day++;
		}

		printf("Say day: %d\n", day);
		printf("Remaining days: %d\n", 366 - day);
	}
	else
	{
		if (month == 2 && day == 60)
		{
			printf("uncorrect date: %02d/%02d/%04d\n", month, day - 31, year);
		}
		else
		{
			printf("Say day: %d\n", day);
			printf("Remaining days: %d\n", 365 - day);
		}
	}
}
