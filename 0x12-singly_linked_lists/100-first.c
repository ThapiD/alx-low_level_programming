#include <stdio.h>
#include <unistd.h>

/**
 * print - Function that prints a string
 * @s: string to be printed
 * Return: 0 always success
 */
int __attribute__((constructor))before_main()
{
	char *s = "You're beat! and yet, you must allow,";
	char *c = "I bore my house upon my back!";

	printf("%s\n%s\n", s, c);
	return (0);
}
