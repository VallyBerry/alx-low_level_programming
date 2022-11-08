#include "main.h"

/**
 * _puts - prints a string followd by a new line.
 * @str: character to be printed.
 * Return: void.
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
