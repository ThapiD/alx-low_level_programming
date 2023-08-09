#include "main.h"

/**
 * *argstostr - Concatenates all the arguments of a program
 * @ac: count
 * @av: vector
 * Return: pointer
 *
 */
char *argstostr(int ac, char **av)
{
	int a = 0, i = 0, n = 0, l = 0;
	char *p;

	if (ac == 0 || av == 0)
	{
		return (NULL);
	}
	while (i < ac)
	{
		while (av[i][n])
		{
			a++;
			n++;
		}
		n = 0;
		i++;
	}

	p = malloc((sizeof(char) * a) + ac + 1);
	i = 0;
	while (av[i])
	{
		while (av[i][n])
		{
			p[l] = av[i][n];
			l++;
			n++;
		}
		p[l] = '\n';

		n = 0;
		l++;
		i++;
	}

	l++;
	p[l] = '\0';
	return (p);
}
