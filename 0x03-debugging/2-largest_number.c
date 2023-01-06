#include "main.h"
/**
 * Lagest_number - return the largest of 3 numbers
 * 0a: first integer
 * 0b: second integer
 * 0c: third integer
 * Return: Largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (b > c && b > a)
		largest = b;
	{
		else if (c > b)
			largest = c;
	}
	else
	{
		largest = b;
	}
	return (largest);
}
