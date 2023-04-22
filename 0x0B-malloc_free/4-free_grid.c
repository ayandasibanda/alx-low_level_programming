#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* free_grid - frees 2d array
* @grid: 2d grid
* @height: height of 2D array
* Description: Allocates memory for a 2D array of integers.
* Return: nothing
*
*/

void free_grid(int **grid, int height)

{
	int i;
    for (i = 0; i < height; i++)

{
	free(grid[i]);	
}
	free(grid);
}

