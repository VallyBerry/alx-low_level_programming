#include "main.h"

/**
 * _puts_recursion - prints a string.
 * @s: given variable.
 * Return: not returning anything.
 */
void _puts_recursion(char *s)
{
	_putchar(_puts_recursion(*s));
}
