#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: the size of the array
 * @c: the initial value
 * Return: a pointer to the array, Null if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int p;

	if (size == 0)
		return (NULL);

	array = (char *)malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);

	for (p = 0; p < size; p++)
		array[p] = c;

	return (array);
}
