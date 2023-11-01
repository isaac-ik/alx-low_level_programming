#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2 D array
 * Description: frees a 2 dimensional grid
 * previously created by your alloc_grid function.
 * Programmer: Isaac-ik
 * @grid: previousy created array
 * @height: ehight dimension of the array
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int h;

	for (h = 0; h < height; h++)
	{
		free(grid[h]);
	}
	free(grid);
}
