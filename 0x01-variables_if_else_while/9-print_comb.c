#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0(success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	for (i < 9)
	{
		putchar(i);
		putchar(',');
	}
	putchar('\n');
		return (0);
}
