#include "main.h"

/**
 * _strlen -  returns the length of a string
 * @s: the string that will be return
 * Return: length
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
