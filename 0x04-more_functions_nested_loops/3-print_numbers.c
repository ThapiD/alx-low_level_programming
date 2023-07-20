#include <unistd.h>
#include "main.h"
/** 
 * print_numbers - Print numbers zero to nine
 * @i: check for number
 * Return: void
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
