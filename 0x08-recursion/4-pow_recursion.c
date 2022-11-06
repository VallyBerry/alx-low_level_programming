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
	else if
		(y = 0)
	{
		return (0);
	}
	else if
		(y = 1)
	{
		res = x * 1;
		return (res);
	}
	else
	{
		(a = 1, a <= y, a++)
		res = (x * x);
		_pow_recursion(res, x);
	}
	return (res);
}
