#include "main.h"

/**
 * _islower - check if the character is lowercase
 * Return: 1 if character is lowercase, otherwise 0.
 * @c: is the character to be checked
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
