#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Function that returns sum of
 * all its parameters
 * @n: checks for sum
 * @...: checks for other arguments
 * Return: sum of parameters or 0 if
 * sum is 0
 */
int sum_them_all(const unsigned int n, ...)
{
	int ans = 0;
	unsigned int a;

	va_list(sums);
	va_start(sums, n);

	if (n == 0)
		return (0);

	for (a = 0; a < n; a++)
	{
		ans += va_arg(sums, int);
	}
	va_end(sums);
	return (ans);
}
