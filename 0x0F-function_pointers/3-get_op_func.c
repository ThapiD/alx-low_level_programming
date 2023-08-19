#include "calc.h"

/**
* get_op_func - correct function to perform operation
* @s: operator
* @get_op_func: fucntion pointer
* Return: 0 always
*/
int (*get_op_func(char *s))(int, int)
{
	int j = 0;

	while (ops[j].op != NULL)
		if (ops[j].op[0] == s[0] && ops.op[1] == '\0')
			return (ops[j].f);
		j++;
	return (NULL);
}
