#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0(success)
 *
 */
int main(void)
{
char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
char alphabet2[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alphabet[i]);
	}
	for (i = 0; i < 26; i++)
	{
		putchar(alphabet2[i]);
	}
	putchar('\n');
	return (0);
}
