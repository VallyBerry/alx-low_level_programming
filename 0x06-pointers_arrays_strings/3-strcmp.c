#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: first int.
 * @s2: second int.
 * Return: 0 if same, -1 if s1 < s2, 1 if s1 > s2.
 */
int _strcmp(char *s1, char *s2)
{
	if (*s1 == *s2)
	{
		return (0);
	}
	else
		(*s1 < *s2)
		{
			return (-1);
		}
	else
		(*s1 > *s2)
		{
			return (1);
		}
	return(0)
}
