#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid -  returns a pointer to a 2 dimensional array of integers.
 * @width: width of array
 * @height: height of array
 * Return: NULL if width or height is 0 or negative
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(sizeof(int *) * height);

	if (arr == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		arr[x] = malloc(sizeof(int) * width);
		if (arr[x] == NULL)
		{
			for (; x >= 0; x--)
				free(arr[x]);

			free(arr);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			arr[x][y] = 0;
	}
	return (arr);
}
