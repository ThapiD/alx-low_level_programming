#include "main.h"

/**
 *
 *
 *
 */
int is_palindrome(char *s)
{
	return (is_palindrome(s + 1));
}

/**
 * _strlen_recursion - Function that prints lenght of string
 * @s: for string
 * Return: lenght of string
 */
int _strlen_recursion(char *s)
{
        if (*s != '\0')
        {
                return (1 + _strlen_recursion(s + 1));
        }
        return (0);
}

/**
 *
 *
 *
 */
int verify_palindrome(char
