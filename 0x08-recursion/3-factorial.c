#include "main.h"
/**
 * factorial - factorial of int
 * @n:int
 * Return: int
 */
int factorial(int n)
{
	int p;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		p = n * factorial(n - 1);
	}
	return (p);
}
