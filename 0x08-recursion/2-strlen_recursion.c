#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string
 * @s: the string to find the lenght
 * Return: int
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	else
	{
		return (_strlen_recursion(s + 1) + 1);
	}
}
