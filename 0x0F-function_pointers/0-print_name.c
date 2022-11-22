#include "function_pointers.h"

/**
 * print_name - a function that prints a name.
 * @name: the name given
 * @f: function of name
 *
 * Rteurn: void
 */
void print_name(char *name, void (*f)(char *))
{
	char *a, *b;

	a = print_name_as_is;
	b = print_name_uppercase;

	if (name != NULL && f != NULL)
	{
		if (f == a)
		{
			print_name_as_is();
		}

		else if (f == b)
		{
			print_name_uppercase();
		}

		else
		{
			printf("wrong input");
		}
		/**f(name);**/
}
