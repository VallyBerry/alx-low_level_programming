#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: 1st int.
 * @b: 2nd int.
 * Return: void.
 */

void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
