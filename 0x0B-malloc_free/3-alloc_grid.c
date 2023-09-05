#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Entry
 * Description: a function that returns a pointer to
 * a 2 dimensional array of integers.
 * @width: wifth of the grid
 * @height: height of the grid
 * Return: Null if error
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	if (grid == NULL)
	{
		return (NULL);
	}
	grid = (int **)malloc(sizeof(int *) * height);

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (i--; i >= 0; i--)
			{
				free(grid[i]);
			}
			free(grid);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
