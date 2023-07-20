#include <stdio.h>
#include "main.h"
/**
 * _isupper - checks for uppercase character
 * @c: for uppercase
 * Reurn: 1 if c is uppercase and 0 for otherwise
 */
int _isupper(int c)
{

	for (c = 97; c <= 122; ++c)
	{
		printf("%c", c);
		return (1);
	}
	return (0);
}
