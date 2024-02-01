#include "main.h"

/**
 * alloc_grid - create a two dimintional array.
 * @width: width of an array.
 * @height: height of an array.
 * Return: a dimintional arary.
 */

int **alloc_grid(int width, int height)
{
	int **darry;
	int i, j;

	i = j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	darry = malloc(sizeof(int) * height);
	while (i < height)
	{
		darry[i] = malloc(sizeof(int) * width);
		j = 0;
		while (j < width)
		{
			darry[i][j] = 0;
			j++;
		}
		i++;
	}
	return (darry);
}
