#include "main.h"

/**
 * print_square -  prints a square, followed by a new line
 * @size: is the size of the square
 * If size is 0 or less, the function should print only a new line
 * Use the character # to print the square
 */

void print_square(int size)
{
	int i;

	if (size > 0)
	{
		for (i = 0; i < size; ++i)
		{
			int j = 0;

			while (j < i)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

