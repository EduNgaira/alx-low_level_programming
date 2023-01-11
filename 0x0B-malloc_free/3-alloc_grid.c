#include <stdlib.h>
#include "main.h"

/**
  * **alloc_grid - creates a two dimensional array of int
  * @width: matrix width
  * @height: matrix height
  * Return: pointer to the created matrix (Success)
  * or NULL (Error)
  */
int **alloc_grid(int width, int height)
{
	int **array;

	int i;

	int j;

	if (height <= 0 || width <= 0)
		return (NULL);
	array = (int **) malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		array[i] = (int *) malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			free(array);
			for (j = 0; j <= i; j++)
				free(array[j]);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);
}
