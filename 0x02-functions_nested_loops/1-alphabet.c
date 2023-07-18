#include "main.h"
/**
 * main - Program that prints alphabets in lowercase
 *
 * Return: Always 0(success)
 */
void print_alphabet(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvxyz";
	int a;

	for (a = 0; a <= 26; a++)
	{
		_putchar(a + '0');
	}
	_putchar('\n');
		return (0);
}
