#include "main.h"

/**
* print_binary - Function that prints binary representation of a number
* @n: numbers to be printed
* Return: void
*/

void print_binary(unsigned long int n)
{

unsigned int num;
int j = 1, digit = 0;

for (j = 63; j >= 0; j--)
{
num = n >> j;
if (num & 1)
{
putchar('1');
digit++;
}
else if (digit)
{
putchar('0');
}
}
if (!digit)
{
putchar('0');
}
}
