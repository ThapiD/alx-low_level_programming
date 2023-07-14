#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0(sucess)
 */

int main(void)
{
	int integerType;
	float floatType;
	long int longintegerType;
	long long int longlongintegerType;
	char charType;

	printf("Size of int: %ld bytes\n", sizeof(integerType));
	printf("Size of float: %ld bytes\n", sizeof(floatType));
	printf("Size of long int: %ld bytes\n", sizeof(longintegerType));
	printf("Size of long long int: %ld bytes\n", sizeof(longlongintegerType));
	printf("Size of char: %ld bytes\n", sizeof(charType));
	return (0);
}
