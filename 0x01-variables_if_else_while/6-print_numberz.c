#include <stdio>
/**
 * main - to print all single digit numbers of base 10 starting from 0
 *
 * Return: 0
 */
int main(void)
{
	char numbers;

	for (numbers = '0'; numbers < '10'; numbers++)
	{
		putchar(numbers);
	}

	putchar('\n');
	return (0);
}
