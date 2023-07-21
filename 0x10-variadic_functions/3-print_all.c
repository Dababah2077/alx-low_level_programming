#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>

/**
 * print_all - Entry point
 * print_all: ...
 * @format: ...
 * Return: ...
 */
void print_all(const char * const format, ...)
{
	int x = 0;
	char *str, *sep = "";

	va_list args;

	va_start(args, format);

	if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
				case 'c' :
					printf("%s%c", sep, va_arg(args, int));
					break;
				case 'i' :
					printf("%s%d", sep, va_arg(args, int));
					break;
				case 'f' :
					printf("%s%f", sep, va_arg(args, double));
					break;
				case 's' :
					str = va_arg(args, char *);
					if(!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					x++;
					continue;
			}
			sep = ", ";
			x++;
		}
		printf("\n");
	}
}
