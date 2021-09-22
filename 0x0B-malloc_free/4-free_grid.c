#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* free_grid - Entry point
* @grid: char
* @height: char
* Return: Always 0 (Success)
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(*(grid + i));
	free(grid);
}
