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
	n = n % 10
	if (n > 5)
	{
		printf("\n%s %d is %d and is greater than 5", lastDigit, n, n);
		scanf("%s %d %d", lastDigit, &n, &n);
	}
	else if ((n % 10 < 6) && (n % 10 != 0))
	{
		printf("\n%s %d is %d and is less than 6 and not 0", lastDigit, n, n % 10);
		scanf("%s %d %d", lastDigit, &n, &n);
	}
	else
	{
		printf("\n%s %d is %d and is 0", lastDigit, n, n % 10);
		scanf("%s %d %d", lastDigit, &n, &n);
	}
	return (0);
}
