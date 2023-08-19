#include "calc.h"

/**
 * main - entry point
 * @argc: arguments 1
 * @argv:arguments 2
 * Return: 0 always success
 */
int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	int num1 = atoi(argv[1]);
	char *op = argv[2];
	int num2 = atoi[3];

	int (*f)(int, int) = get_op_func(op);

	if (f == NULL)
	{
		printf("Error\n");
		return (99);
	}

	if ((op[0] == '/' || op[0] == '%') && num2 == 0)
	{
		printf("Error\n");
		return (100);
	}

	int result = f(num1, num2);

	printf("%d\n", result);

	return (0);
}
