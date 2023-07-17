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
	char lastDigit[] = "Last digit of";
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 5)
	{
		printf("\n Last digit of and is greater than 5");
		scanf("%s %d", lastDigit, &n)
	}
	else if (n == 0)
	{
		printf("\n Last digit of and is 0");
		scanf("%s %d", lastDigit, &n)
	}
	else
	{
		printf("\n Last digit of and is less than 6 and not 0");
		scanf("%s %d", lastDigit, &n)
	}
	return (0);
}
