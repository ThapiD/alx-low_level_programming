#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0(success)
 *
 */
int main(void)
{
	char alphabet[52] = "abcedfghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(alphabet[i]);
	}
	putchar('\n');
	return (0);
}
