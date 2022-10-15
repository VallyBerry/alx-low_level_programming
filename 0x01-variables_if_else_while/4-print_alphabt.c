#include <stdio.h>
/**
 * main - to print all lowercase alphabets except 'q' and 'e'
 *
 * Return: 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter = 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}

	putchar('\n');

	return (0);
}
