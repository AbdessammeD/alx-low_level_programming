#include<stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the 2d table.
 * @height: heigth of 2d table.
 *
 * Return: returns a pointer to a 2d array of integers. NULL otherwise.
 */
int **alloc_grid(int width, int height)
{
	int **ar, i, j;

	if (width <= 0 && height <= 0)
		return (NULL);
	ar = malloc(sizeof(int **) * width);
	if (!ar)
	{
		free(ar);
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		ar[i] = malloc(sizeof(int *) * height);
		if (!ar[i])
			return (NULL);
	}
	for (i = 0; i < width; i++)
		for (j = 0; j < height; j++)
			ar[i][j] = 0;
	return (ar);
}