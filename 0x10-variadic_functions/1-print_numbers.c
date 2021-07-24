#include "variadic_functions.h"
/**
 * print_numbers - This function print a list of numbers with a separator
 * @separator: the separator send by the user
 * @n: the number of digits of the list
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ls;
	unsigned int i;

	va_start(ls, n);

	for (i = 0 ; i < n ; i++)
	{

		printf("%d", va_arg(ls, int));
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}

	va_end(ls);
		putchar('\n');

}
