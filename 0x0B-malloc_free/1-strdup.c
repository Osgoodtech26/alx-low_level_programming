#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the source string
 * Return: returns a pointer to the duplicate
 * It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *peter;
	int a, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	peter = (char *)malloc((sizeof(char) * len) + 1);
	if (peter == NULL)
		return (NULL);

	for (a = 0; a < len; a++)
		peter[a] = str[a];
	peter[len] = '\0';

	return (peter);
}
