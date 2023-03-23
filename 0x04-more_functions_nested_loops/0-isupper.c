#include "main.h"

/**
 * _isupper - function that checks for uppercase character
 * @c: the int to be checked
 * Return: 1 if c is uppercase, otherwise 0.
 */
int _isupper(int c)
{
	char c;

	if (c >= 'A' && c <= 'Z')
	{
		_putchar(c);
		_putchar(':');
		_putchar(' ');
		return (1);
	}
	else
	{
		_putchar(c);
		_putchar(':');
		_putchar(' ');
		return (0);
	}
	_putchar('\n');
}
