#include <stdio.h>
#include "main.h"

/**
 * reset_to_98 - updates the value of a pointer  to 98.
 * @n: 1st variable.
 * @*p: 2nd variable.
 * return: void.
 */
void reset_to_98(int *n)
{
	int n;
	int *p;

	n = 402;
	p = &n;
	_putchar('n');
	reset_to_98(*p);
	_putchar('n');
}
