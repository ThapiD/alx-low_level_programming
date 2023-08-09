#include "main.h"

/**
 * **alloc_grid - Function that returns a pointer
 * to a 2 dimensional array
 * @width: rows
 * @height: columns
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int a, i;
	int **result;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	result = malloc(sizeof(int *) * height);
	if (result == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		result[a] = malloc(sizeof(int) * width);
		if (result[a] == NULL)
		{
			free(result);
			for (i = 0; i <= height; i++)
			{
				free(result[i]);
			}
			return (NULL);
		}
		for (i = 0; i < width; i++)
		{
			result[a][i] = 0;
		}
	}
	return (result);
}
