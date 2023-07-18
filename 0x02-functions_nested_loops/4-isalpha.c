#include "main.h"
/**
 * test_isalpha - Checks for alphabetic character
 * @c: character to be checked
 *
 * Return: 1 if character is a letter, lowercase or uppercase and 0 if otherwise
 */
void _isalpha(int c)
{
	if (c >= 97 && c <= 12)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
