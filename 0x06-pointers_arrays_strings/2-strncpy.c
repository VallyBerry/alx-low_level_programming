#include "main.h"

/**
 * *_strncpy - copies string.
 * @a: first character.
 * Return: char.
 */
char *_strncpy(char *dest, char *src, int n)
{
	char a;

	a = *src;
	*dest = a;
	_putchar(a);
	Return(a);
}
