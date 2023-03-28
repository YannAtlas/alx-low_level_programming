#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * followed by a new line
 * @s: a string
 */

void print_rev(char *s)
{
	int li = 0;
	int o;

	while (*s != '\0')
	{
		li++;
		s++;
	}
	s--;
	for (o = li; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
