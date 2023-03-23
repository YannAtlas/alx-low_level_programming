#include "main.h"

/**
 * print_triangle - prints a triangle of a squares
 * @size: is the size of the triangle
 * If size is 0 or less, the function should print only a new line
 */

void print_triangle(int size)
{
	int x, y, z;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < size; ++x)
		{
			for (y = size - x; y > 1; --y)
			{
				_putchar(32);
			}
			for (z = 0; z <= x; z++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
