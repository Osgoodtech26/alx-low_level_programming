#include "main.h"
/**
 * check - checks for number that is prime
 * @e:int
 * @f:int
 * Return:int
 */
int check(int e, int f)
{
	if (f < e / 2)
	{
		return (1);
	}
	if (e % f == 0)
	{
		return (0);
	}
	return (check(e, f + 1));
}

/**
 * is_prime_number - states if number is prime
 * @n:int
 * Return:int
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (check(n, 1));
}
