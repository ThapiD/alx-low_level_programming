#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0(success)
 */
int main(void)
{
	char n;
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar((i % 10) + '0');

	for (n = 'a'; n <= 'f'; n++)
	{
		putchar(n);
	}
	}
	putchar('\n');
		return (0);
}
