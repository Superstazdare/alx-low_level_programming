#include <stdio.h>
#include "main.h"

/**
 * print_traingle - prints a triangle, followed by a new line
 * @size:size of the triangle
 *
 * Return: returns nothing
 */
void print_triangle(int size)
{
	int a, b;

	if (size > 0)
	{
		for (a = 1; a <= size; a++)
		{
			for ((b = size - a); b > 0; b--)
			{
				putchar(' ');
			}
			for (b = 0; b < a; b++)
			{
				putchar('#');
			}

			if (inc1 == size)
			{
				continue;
			}
			putchar('\n');
		}
	}
	putchar('\n');
}
