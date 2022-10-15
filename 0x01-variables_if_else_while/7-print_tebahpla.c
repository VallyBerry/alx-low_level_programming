#include <stdio.h>
/**
 * main - to print all lowercase alphabets in reverse
 *
 * Return: 0
 */
int main(void)
{
	char letters;

	for (letters = 'z'; letters >= 'a'; letters--)
		putchar(letters);

	putchar('\n');

	return (0);
}
