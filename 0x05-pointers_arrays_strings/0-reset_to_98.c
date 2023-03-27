#include "main.h"

/**
 * reset_to_98 - pointer to an int as parameter
 * and updates the value it points to to 98
 * @p: is a parameter
 */

void reset_to_98(int *p)
{
	int n;

	p = &n;
	*p = 98;
	_putchar(n);
}
