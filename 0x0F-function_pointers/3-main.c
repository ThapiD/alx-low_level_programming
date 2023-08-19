#include "3-calc.h"

/**
 * main - entry point
 * @argc: arguments 1
 * @argv:arguments 2
 * Return: 0 always success
 */
int main(int argc, char *argv[])
{
	int num1 = atoi(argv[1]);
	char *op = argv[2];
	int num2 = atoi(argv[3]);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		return (99);
	}

	if ((op[0] == '/' || op[0] == '%') && num2 == 0)
	{
		printf("Error\n");
		return (100);
	}

	printf("%d\n", get_op_func(op)(num1, num2));

	return (0);
}
