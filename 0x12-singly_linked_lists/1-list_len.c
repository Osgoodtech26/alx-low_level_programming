#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * list_len - check the code for Holberton students
 * @h: The list_t of the names
 *
 * Return: The number of nodes in h
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;

	}

	return (count);
}
