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
	if ((n % 10) > 5)
	{
		printf("%s %d is", lastDigit, n);
		scanf("%s %d", lastDigit, &n);

		printf(" %d and is greater than 5\n", n);
		scanf("%d", n % 10);
	}
	else if (n == 0)
	{
		printf("\n%s %d is %d and is 0", lastDigit, n, n);
		scanf("%s %d %d", lastDigit, &n, n % 10);
	}
	else ((n % 10) < 6 && (n % 10) ! = 0)
	{
		printf("\n%s %d is %d and is less than 6 and not 0", lastDigit, n, n);
		scanf("%s %d %d", lastDigit, &n, n % 10);
	}
	return (0);
}
