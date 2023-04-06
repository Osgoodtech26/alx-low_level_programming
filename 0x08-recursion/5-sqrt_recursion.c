#include "main.h"

/**
 * check - checks for the square root
 * @g:int
 * @h:int
 *
 * Return: int
 */
int check(int g, int h)
{
	if (g * g == h)
		return (g);
	if (g * g > h)
		return (-1);
	return (check(g + 1, h));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to find sqrt of
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check(1, n));
}
