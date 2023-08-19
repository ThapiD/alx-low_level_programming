#include "calc.h"

/**
 * op_add - funtion that returns addition
 * op_sub - function that returns subtraction
 * op_mul - returns multiplicaton
 * op_div - returns division
 * op_mod - returns modulus
 * @a: operand
 * @b: operand
 * Return: 0 always succuss
 */
int op_add(int a, int b)
{
	return (a + b);
}
int op_sub(int a, int b)
{
	return (a - b);
}
int op_mul(int a, int b)
{
	return (a * b);
}
int op_div(int a, int b)
{
	if (b == 0)
		return (-1);
	return (a / b);
}
int op_mod(int a, int b)
{
	if (b == 0)
		return (-1)
	return (a % b);
}
