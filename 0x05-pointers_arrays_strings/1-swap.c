#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 * @a: the that will be swap with b
 * @b: the that will be swap with a
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
