#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring
 *
 * @accept: which is only bytes from
 *
 * @s:the initail segment of
 *
 * Return: the number of bytes
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int lenghth = 0;
	char *abc;

	for (; *s != '\0'; s++)
	{
		abc = accept;

	while (*abc != '\0')
	{
		if (*s == *abc)
		{
			lenghth++;
			break;
		}
		abc++;
	}

	if (*abc == '\0')
	{
		return (lenghth);
	}
	}
	return (lenghth);
}

