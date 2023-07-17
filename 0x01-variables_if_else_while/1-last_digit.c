#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
/* betty style doc for function main goes there */
int main(void)
{
	char lastDigit = "Last digit of";
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 5)
	{
		printf("%c, %d and is greater than 5\n", lastDigit, n);
	}
	else if (n == 0)
	{
		printf("%c, %d and is 0\n", lastDigit, n);
	}
	else
	{
		printf("%c, %d and is less than 6 and not 0\n", lastDigit, n);
	}
	return (0);
}
