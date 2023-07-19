#include "main.h"
/**
 * _isalpha - Checks for alphabetic character
 * @c: character to be checked
 *
 * Return: 1 for letters and 0 if otherwise
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}	
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
