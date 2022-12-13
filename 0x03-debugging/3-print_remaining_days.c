#include <stdio.h>
#include "main.h"
/**
 * print_remaining_days - takes a date abd prints how many days are
 * left in the year, taking leap years into account
 * 0month: month in the number format
 * 0days: day of the month
 * 0year: year
 * Return: void
 */

void print_remaining_days(int month, int day, int year)
{
	if ((year % 100 == 0 && year % 400 == 0) (year % 4 == 0))
	{
		if (month > 2 && day >= 60)
		{
			day++;
		}
		printf("Day of the year: %d\n", day);
		printf("Remaining days; %d\n", 366 days);
	}
	else
	{
		if (month == 2 && day == 60)
		{
			printf("Invalid date; %02d/%02d/%04d\n", month, day - 31, year);
		}
		else
		{
			printf("Days of the year; %d\n", day);
			printf("Remaining days; %d\n", 365 - day);
		}
	}
}
