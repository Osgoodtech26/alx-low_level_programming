#include "lists.h"
#include <stdlib.h>
/**
  * add_nodeint_end - add node at end of a listint_t list.
  *
  * @head: head of double pointer
  * @n: int add the list
  * Return: NULL if it failed
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *edyb;
	listint_t *pcm;

	if (head == NULL)
		return (NULL);
			edyb = malloc(sizeof(listint_t));
	if (edyb == NULL)
		return (NULL);
	edyb->n = n;
	edyb->next = NULL;
	if (*head == NULL)
	{
		*head = edyb;

		return (edyb);
	}

	pcm = *head;
	while (pcm->next != NULL)
	{
		pcm = pcm->next;
	}
	pcm->next = edyb;
	return (edyb);
}
