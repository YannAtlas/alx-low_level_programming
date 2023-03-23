#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9
 * do not print 2 and 4
 * followed by a new line
 */

void print_most_numbers(void)
{
	int n = 0;

	while (i <= 9)
	{
		while (i != 2 && i != 4)
		{
			_putchar(i);
			i++;
		}
	}
}
