#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - function that frees a listint_t list
 * @head: a double pointer of lists
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *edyb;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		edyb = (*head)->next;
		free(*head);
		*head = edyb;
	}
}
