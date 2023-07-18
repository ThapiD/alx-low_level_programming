#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0(success)
 */
int main(void)
{
	char alphabet[6] = "abcdef";
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		
		if (i < 9)
		{
			putchar([1]alphabet);
		}
	}
	putchar('\n');
		return (0);
}
