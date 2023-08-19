#include "3-calc.h"

/**
* get_op_func - correct function to perform operation
* @s: operator
* Return: 0 always
* Descrption: this function returns a pointer to the
* function that corresponds to the operator
*/
int (*get_op_func(char *s))(int, int)
{
	int j = 0;

	while (ops[j].op != NULL)
	{
		if (ops[j].op[0] == s[0])
		{
			return (ops[j].f);
		}
		j++;
	}
	return (NULL);
}
