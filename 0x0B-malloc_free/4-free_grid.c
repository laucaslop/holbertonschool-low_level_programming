#include "holberton.h"
#include <stdlib.h>

/**
* free_grid - main
* @grid: multidimensional array integers
* @height: height the grid
* Return: no return
*/

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
		{
			free(grid[height]);
		}
		free(grid);
	}
}
