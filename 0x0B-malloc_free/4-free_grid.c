#include "main.h"

/**
 * free_grid - free a memory after create an array.
 * @grid: a pointer of pointer to a two dimintional array.
 * @height: count of rows in two dimintional array.
 * Return: void.
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid != NULL)
	{
		while (i < height)
		{
			free(grid[i]);
			i++;
		}
		free(grid);
	}
}
