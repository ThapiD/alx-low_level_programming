#include <stdio.h>

/**
<<<<<<< HEAD
 * main - Prints all arguments
 * @argc: number of comman lines
 * @argv: array of command lines
=======
 * main - Program that prints all arguments it receives
 * @argc: number of command lines
 * @argv: arrays in command lines
>>>>>>> d789045707041e255358432e30a2977c8a6fb5aa
 * Return: 0 always success
 */
int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	{
<<<<<<< HEAD
		printf("%s\n", argv[n]);;
=======
		printf("%s\n", argv[v]);
>>>>>>> d789045707041e255358432e30a2977c8a6fb5aa
	}
	return (0);
}
