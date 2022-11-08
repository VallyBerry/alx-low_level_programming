#include <stdio.h>

/**
 * *_memcpy - copies n bytes from src to dest.
 * @n: function copies.
 * @src: bytes from here.
 * @dest: to here.
 * Return: a pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
