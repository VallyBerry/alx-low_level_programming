#include "main.h"
#include <math.h>

/**
 * _pow_recursion - retrurns the value of x raised to the power of y.
 * @x: an integer.
 * @y: an integer.
 * Return: -1 if y is lower than 1, result if greater.
 */
int _pow_recursion(int x, int y)
{
	int a, res;

	if (y < 0)
	{
		return (-1);
	}
	else
		a = 0;
	while (a <= y)
	{
		res = (x * x);
		_pow_recursion(x, y);
	}

	return (res);

}
