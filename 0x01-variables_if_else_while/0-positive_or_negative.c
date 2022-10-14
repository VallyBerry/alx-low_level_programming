#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - to print the value of the number stored in the variable
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("is positive\n", n);
	}
	else if (n == 0)
	{
		printf("is zero\n", n);
	}
	else if (n < 0)
	{
		printf("is negative\n", n);
	}
	return (0);
}
