#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - Function that prints numbers
 * @separator: string to be printed between numbers
 * @n: number of int passed to function
 * @...: more arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	int ans = 0;

	va_list(print);
	va_start(print, n);

	for (a = 0; a < n; a++)
	{
		ans = va_arg(print, int);
		printf("%d", ans);
	if (separator != NULL && a < n - 1)
	{
		printf("%s", separator);
	}
	}
	va_end(print);
	printf("\n");
}
