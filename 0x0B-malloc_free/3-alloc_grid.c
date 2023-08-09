#include <stdlib.h>

/**
 * alloc_grid - return pointer to 2 dimensional array
 * @height: represent columns
 * @width: repesent rows
 * Return: returns a pointer
 */

int **alloc_grid(int width, int height)
{
	int a;
	int b = 0;
	int i = 0;
	int **temp;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	temp = malloc(sizeof(int *) * height);
	if (temp == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		temp[a] = malloc(sizeof(int) * width);
		if (temp[a] == NULL)
		{
			for (i = a - 1; i >= 0; i--)
			{
				free(temp[i]);
			}
			free(temp);
			return (NULL);
		}
	}
	for (b = 0; b < width; b++)
	{
		temp[height - 1][b] = 0;
	}
	return (temp);
}
