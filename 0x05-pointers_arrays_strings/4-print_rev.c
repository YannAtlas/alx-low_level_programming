#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * followed by a new line
 * @s: a string
 */

void print_rev(char *s)
{
	int i = 0;
	int o;

	while (*s != '\n')
	{
		i++;
		s++;
	}
	s--;
	for (o = i; o > 0; o--;)
	{
		_putchat(*s);
		s--;
	}
	_putchar('\n');
}
