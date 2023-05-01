#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: double pointer
 * @index: index of node
 *
 * Return: pointer to the index node
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *edyb, *pcm;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		pcm = (*head)->next;
		free(*head);
		*head = pcm;
		return (1);
	}

	edyb = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (edyb->next == NULL)
			return (-1);
		edyb = edyb->next;
	}
	pcm = edyb->next;
	edyb->next = pcm->next;
	free(pcm);
	return (1);
}
