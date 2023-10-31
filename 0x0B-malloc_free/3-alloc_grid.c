#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function
 * Description: returns a pointer to a 2 dimensional array of integers
 * @width: the width
 * @height: the height
 * Return: NULL on failure If width or height is 0 or negative, return NULL
 */
int **alloc_width(int width,int height)
{
	int **pmatrix, *array, size, h, w;
	
	size = width * height;
	array = malloc(size);
	pmatrix = &array;

	if (width == NULL || height == NULL || pmatrix == NULL)
	{
		return (NULL);
	}
	for (h = 0; h < height; h++)
	{
		for (w = 0; w <= width; w++)
		{
			if (w == width)
			{
				array[h][w] = '\0';
			}
			else
			{
				array[h][w] = 0;
			}
		}
	}
	return (pmatrix);
}

