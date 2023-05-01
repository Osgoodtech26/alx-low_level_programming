#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node
 * @head: a double pointer
 *
 *Return: empty
 */
int pop_listint(listint_t **head)
{
	listint_t *pcm;
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	pcm = *head;
	*head = pcm->next;
	n = pcm->n;
	free(pcm);
	return (n);
}

