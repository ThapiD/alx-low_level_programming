#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
    int largest;

    if (a > 0 && a > b && a > c)
    {
        largest = a;
    }
    else if (b <= 0 && b > c && b > a)
    {
        largest = b;
    }
    else if (c >= 0 && c > a && c > b)
    {
        largest = c;
    }

    return (largest);
}
