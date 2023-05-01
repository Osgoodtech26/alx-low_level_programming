#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserting a new node at agiven postion
 * @head: double pointer
 * @idx: index of the node
 * @n: new node value
 *
 * Return: the address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int p;
	listint_t *edyb, *pcm;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		edyb = *head;
		for (p = 0; p < idx - 1 && edyb != NULL; p++)
		{
			edyb = edyb->next;
		}
		if (edyb == NULL)
			return (NULL);
	}
	pcm = malloc(sizeof(listint_t));
	if (pcm == NULL)
		return (NULL);

	pcm->n = n;

	if (idx == 0)
	{
		pcm->next = *head;
		*head = pcm;
		return (pcm);
	}

	pcm->next = edyb->next;
	edyb->next = pcm;

	return (pcm);
}

