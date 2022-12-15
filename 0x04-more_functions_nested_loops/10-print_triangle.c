#include "main.h"

/**
 * print_traingle - function that prints a triangle
 * @size: size of the triangle
 *
 * Return: triangle of '#'s
 */
void print_triangle(int size)
{
	int a, b, c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; b <= (size - 1); b++)
		{
			for (sp = 0; sp < (size - 1) - b; a++)
			{
				_putchar(' ');
			}
			for (c = 0; c <= b; c++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
