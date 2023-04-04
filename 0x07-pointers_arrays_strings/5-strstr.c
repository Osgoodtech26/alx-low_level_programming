#include "main.h"
#include <stddef.h>


/**
 * _strstr - locates a substring
 *
 * @haystack: the longer string to search
 * @needle: the first occurrence of the substring
 *
 * Return: a pointer beg of substring or @Null if it not foound.
 */

char *_strstr(char *haystack, char *needle)
{
	int a, b;

	for (a = 0;  haystack[a] != '\0'; a++)

	{

		for (b = 0; needle[b] != '\0'; b++)

		{

			if (haystack[a + b] != needle[b])

			{
				break;
		}
	}
	if (needle[b] == '\0')

	{
		return &haystack[a];
	}

	}
	return (NULL);
}
