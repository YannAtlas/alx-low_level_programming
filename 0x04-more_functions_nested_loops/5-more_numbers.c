#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * followed by a new line
 */

void more_numbers(void)
{
	int i, j;

	i = 0;
	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
