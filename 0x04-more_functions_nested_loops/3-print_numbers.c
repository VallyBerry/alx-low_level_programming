#include "main.h"

/**
*print_numbers - print 0123456789
* owned by Bwave ICT
*Return: void
*/

void print_numbers(void)
{
	char c;

	for (c = '0'; c < '10')
	{
	_putchar(c);
	c++;
	}
	_putchar('\n');
}
