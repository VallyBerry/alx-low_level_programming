#include <stdio.h>

/**
 * *_memcpy - copies n bytes from src to dest.
 * @a: a pointer to dest.
 * Return: a pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *a = &dest;
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (a);
}
