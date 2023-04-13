#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of
 * integers and arrays.
 * @width: width of  an array
 * @height: height of array
 * owned by osgoodtech26
 * Return: a pointer to a 2 dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **array, a, p;
	int len = width * height;

	if (len <= 0)
		return (NULL);

	array = (int **)malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		array[a] = (int *)malloc(sizeof(int) * width);
		if (array[a] == NULL)
		{
			for (a--; a >= 0; a--)
				free(array[a]);
			free(array);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
		for (p = 0; p < width; p++)
			array[a][p] = 0;

	return (array);
}
