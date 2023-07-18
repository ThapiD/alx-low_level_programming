#include <stdio.h>
/**
 * main - Program that prints alphabets in lowercase
 *
 * Return: Always 0(success)
 */
int main(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvxyz";
	int a;

	for (a = 0; a <= 26; a++)
	{
		putchar(a + '0');
	}
	putchar('\n');
		return (0);
}
