#include "variadic_functions.h"

/**
 * print_all - Function that prints anything
 * @format: list of different arguments
 * passed to function
 * @...: more arguments
 */
void print_all(const char * const format, ...)
{
	char c;
	int i;
	float f;/*getting variable unused error*/
	char *s;

	va_list(all);
	va_start(all, format);

	for (i = 0; format && format[i]; i++)
	{
		c = (char)va_arg(all, int);
		printf("%c,", c); /*function doesnt accept char so its promoted to int*/
		printf("%d,", va_arg(all, int));
		f = (float)va_arg(all, double);
		printf("%f,", f); /*function accepts double instead of float(promoted)*/
	s = va_arg(all, char *);
	if (s == NULL)
		printf("(nil)");
	else
		printf("%s,", va_arg(all, char *));
	}
	va_end(all);
	printf("\n");
}
