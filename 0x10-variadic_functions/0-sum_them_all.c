#include "variadic_functions.h"

/**
 * sum_them_all - adds all the numbers
 * @n: the number of parameters passed
 * owned by osgoodtech26
 * Return: Always 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int sum = 0;
	unsigned int p;

	va_start(ap, n);

	if (n == 0)
		return (0);

	for (p = 0; p < n; p++)

		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
