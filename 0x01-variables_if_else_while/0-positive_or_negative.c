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
	int n;
	{

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	for (n++; n = 0; n--)
		printf("%d is positive\n", rand() - RAND_MAX / 2);
		printf("%d is zero\n", rand() - RAND_MAX / 2);
		printf("%d is negative\n", rand() - RAND_MAX /2);
	}
	return (0);
}
