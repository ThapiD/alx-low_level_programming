#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0(success)
 */
int main(void)
{
	int i, n;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);

	for (n = 97; n < 103; --n)
	{
		putchar(n);
	}
	}
	putchar('\n');
		return (0);
}
