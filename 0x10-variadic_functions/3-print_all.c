#include "variadic_functions.h"
/**
 * print_all - prints the leters in a determinated format
 * @format: is the list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list ls;
	char *str;
	int i = 0, ult = 0;
	char *coma = ", ";

	va_start(ls, format);
	while (format && format[i])
		i++;
		while (format && format[ult])
		{
		if (ult == (i - 1))
		{
			coma = "";
		}
		switch (format[ult])
		{
				case 'c':
					printf("%c%s", va_arg(ls, int), coma);
				break;

				case 'i':
					printf("%d%s", va_arg(ls, int), coma);
				break;

				case 'f':
					printf("%f%s", va_arg(ls, double), coma);
				break;

				case 's':
					str = va_arg(ls, char *);
					if (str == NULL)
						str = "(nil)";
					printf("%s%s", str, coma);
				break;
		}
			ult++;
		}
	putchar('\n');
	va_end(ls);
	}
