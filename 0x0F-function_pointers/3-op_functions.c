#include "3-calc.h"

/**
 * op_add - funtion that returns addition
 * @a: operand
 * @b: operand
 * Return: 0 always succuss
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - funtion that returns subtraction
 * @a: operand
 * @b: operand
 * Return: 0 always succuss
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function returns multiplication
 * @a: operand
 * @b: operand
 * Return: 0 always succuss
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * * op_div - function that returns division
 * @a: operand
 * @b: operand
 * Return: 0 always succuss
 */
int op_div(int a, int b)
{
	if (b == 0)
		return (-1);
	return (a / b);
}

/**
 * * op_mod - funtion that returns modulus
 * @a: operand
 * @b: operand
 * Return: 0 always succuss
 */
int op_mod(int a, int b)
{
	if (b == 0)
		return (-1);
	return (a % b);
}
