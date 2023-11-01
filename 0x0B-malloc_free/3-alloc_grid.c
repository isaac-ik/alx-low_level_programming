#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function
 * Description: returns a pointer to a 2 dimensional array of integers
 * @width: the width
 * @height: the height
 * Return: NULL on failure If width or height is 0 or negative, return NULL
 */
int **alloc_grid(int width, int height)
{
	int **pmatrix, h, w, i;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}

	pmatrix = (int **)malloc(sizeof(int *) * height);
	if (pmatrix == NULL)
	{
		return (NULL);
	}
	for (h = 0; h < height; h++)
	{
		pmatrix[h] = (int *)malloc(sizeof(int) * width);
		if (pmatrix[h] == NULL)
		{
			for (i = 0; i < h; i++)
			{
				free(pmatrix[i]);
			}
			free(pmatrix);
			return (NULL);
		}
		for (w = 0; w < width; w++)
		{
			pmatrix[h][w] = 0;
		}
	}
	return (pmatrix);
}

