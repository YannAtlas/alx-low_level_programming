#include "main.h"

/**
 * _islower - function that checks for lowercase character
 * @c: is the character to be checked
 * return: 1 if the character is lowercase 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
