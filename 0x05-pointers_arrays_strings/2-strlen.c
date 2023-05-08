#include "main.h"
#include <string.h>

/**
 * _strlen - returns the length of a string.
 * @s: int to return length.
 * Return: 0.
 */

int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
