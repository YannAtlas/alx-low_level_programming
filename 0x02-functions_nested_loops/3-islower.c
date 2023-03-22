#include "main.h"

/**
 * _islower - function that checks for lowercase character
 * @c is the character to be checked
 * return: 1 (success if the character is lowercase)
 * return: 0 (success if the character is uppercase)
 */

int _islower(int c)
{
	if ( c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
