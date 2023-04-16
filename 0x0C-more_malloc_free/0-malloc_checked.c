#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>
/**
 * malloc_checked - cause norml process termination with a status value of 98
 * @b: allocated memory
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *e = malloc(b);

	if (e == NULL)
		exit(98);
	return (e);
}
