#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer to the beginning of the list
 *
 * Return: address of the node where the loop starts or NULL if there's no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *edyb, *peter;


	edyb = peter = head;

	while (edyb && peter && peter->next)
	{
		edyb = edyb->next;

		peter = peter->next->next;

		if (edyb == peter)
		{
			edyb = head;

			break;
		}
	}
	if (!edyb || !peter || !peter->next)
		return (NULL);
	while (edyb != peter)
	{
		edyb = edyb->next;
		peter = peter->next;
	}

	return (peter);
}
