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
	char lastDigit[] = "Last digit of ... is ...";
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 5)
	{
		printf("\nLast digit of");

		printf("%d is %d greater than 5", lastDigit, n);
		scanf("%s %d", lastDigit, n);
	}
	else if (n == 0)
	{
		printf("\nLast digit of");

		printf("%d is %d and is 0", lastDigit, n);
		scanf("%s %d", lastDigit, n);
	}
	else
	{
		printf("\nLast digit of");

		printf("%d is %d and is less than 6 and not 0", lastDigtit, n);
		scanf("%s %d", lastDigit, n);
	}
	return (0);
}
