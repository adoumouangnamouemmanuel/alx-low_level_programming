#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the array.
 * @height: height of the array.
 *
 * Return: pointer of an array of integers
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int tabout;

	if (width <= 0 || height <= 0)
		return (NULL);
	tabout = malloc(height * sizeof(int *));
	if (tabout == NULL)
	{
		free(tabout);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		tabout[i] = malloc(sizeof(int) * width);
		if (tabout[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(tabout[i]);
			free(tabout);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			tabout[i][j] = 0;
		}
	}

	return (tabout);
}
