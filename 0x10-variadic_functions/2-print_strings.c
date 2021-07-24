#include "variadic_functions.h"
/**
 * print_strings - Print a list of strings
 * @separator: is the separator send by the user
 * @n: is the limit of the list of strings
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{

	va_list ls;
	unsigned int i;
	char *str;

	va_start(ls, n);

	str = malloc(sizeof(char *) * n);
	for (i = 0 ; i < n ; i++)
	{
		str = va_arg(ls, char*);

		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");

		if (i != n - 1 && separator != NULL)
			printf("%s", separator);

	}

	va_end(ls);

	putchar('\n');
	free(str);

}
