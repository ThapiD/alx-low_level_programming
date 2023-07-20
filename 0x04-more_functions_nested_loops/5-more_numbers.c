#include "main.h"
/**
 * more_numbers - Prints the numbers from 0 - 14, 10 times
 *
 * Return: void
 */
void more_numbers(void)
{
	char i, j;

	for (j = 1; j <= 10; j++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i >= 10)
				_putchar('1');
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
