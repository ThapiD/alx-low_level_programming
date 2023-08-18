#include "variadic_functions.h"

/**
 * print_strings - Function that prints strings
 * @separator: string to be printed
 * @n: number of strings passed on the
 * function
 * @...: more arguments
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	char *p;
	va_list (line);
	va_start(line, n);

	for (a = 0; a < n; a++)
	{
		char *p = va_arg(line, char *);
	if (p == NULL)
		printf("(nil)");
		else
		{	
			printf("%s", p);
		}
	}
	if (separator == NULL && a < n - 1)
	{
		printf("%s", separator);
	}
	printf("\n");
	va_end(line);
}
