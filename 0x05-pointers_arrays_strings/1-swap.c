#include "main.h"
/**
 * swap_int - swaps the value of two integers
 * owned by osgood peter
 * @a: first int
 * @b: second int
 * Return 0;
 */
void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}
