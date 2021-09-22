#include "main.h"
#include <stdlib.h>
/**
* alloc_grid - Entry point
* @width: char
* @height: char
* Return: Always 0 (Success)
*/
int **alloc_grid(int width, int height)
{
	int i, j, **matrix;

	if (width <= 0 || height <= 0)
		return (NULL);

	matrix = (int **)malloc(sizeof(int *) * height);
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		*(matrix + i) = (int *)malloc(sizeof(int) * width);

		if (*(matrix + i) == NULL)
		{
			for (; i >= 0; i--)
				free(*(matrix + i));
			free(matrix);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			*(*(matrix + i) + j) = 0;
	}
	return (matrix);
}
