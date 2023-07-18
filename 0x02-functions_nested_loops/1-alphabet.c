#include <stdio.h>
/**
 * main - Program that prints alphabets in lowercase
 *
 * Return: Always 0(success)
 */
void print_alphabet(void);

void print_alphabet(void)
{
	printf("print alphabet");
}
int main(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvxyz";
	int a;

	for (a = 0; a <= 26; a++)
	{
		putchar(alphabet[a]);
	}
	putchar('\n');
		return (0);
}
