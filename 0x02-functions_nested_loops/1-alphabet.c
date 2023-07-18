#include "main.h"
/**
 * main - Program that prints alphabets in lowercase
 *
 * Return: Always 0(success)
 */
void print_alphabet(void);
{
	char alphabet[26] = "abcdefghijklmnopqrstuvxyz";
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a + 'a');
	}
	_putchar('\n');
		return (0);
}
