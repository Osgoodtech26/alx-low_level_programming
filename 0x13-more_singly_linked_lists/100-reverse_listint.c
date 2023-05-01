#include "lists.h"

/**
 * reverse_listint - the function that reverses a listint_t
 * @head: double pointer
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *past, *next;

	if (head == NULL || *head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);
	past = NULL;
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = past;
		past = *head;
		*head = next;
	}
	*head = past;
	return (*head);
}
