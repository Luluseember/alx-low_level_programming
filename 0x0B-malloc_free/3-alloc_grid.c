#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the grid
 * @height: height of the grid
 * Return: pointer to two dimen. array
 */
int **alloc_grid(int width, int height)
{
	int **eee;
	int w, h;

	if (width <= 0 || height <= 0)
		return (NULL);

	eee = malloc(sizeof(int *) * height);

	if (eee == NULL)
		return (NULL);

	for (w = 0; w < height; w++)
	{
		eee[w] = malloc(sizeof(int) * width);

		if (eee[w] == NULL)
		{
			for (; w >= 0; w--)
				free(eee[w]);

			free(eee);
			return (NULL);
		}
	}

	for (w = 0; w < height; w++)
	{
		for (h = 0; h < width; h++)
			eee[w][h] = 0;
	}

	return (eee);
}
