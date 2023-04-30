#include "lists.h"
#include <stdlib.h>
/**
  * add_nodeint - add node at beginning of a listint_t list.
  *
  * @head: head of double pointer
  * @n: int add the list
  * Return: NULL if it failed
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *edyb;

	if (head == NULL)
		return (NULL);
	edyb = malloc(sizeof(listint_t));
	if (edyb == NULL)
		return (NULL);
	edyb->n = n;
	edyb->next = *head;
	*head = edyb;
	return (edyb);
}
