#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * _strlen - finds the lenght of a string
 * @str: string to find the lenght of
 *
 * Return: lenght of a string
 */

unsigned int _strlen(char *str)
{
	unsigned int b;

	for (b = 0; str[b]; b++)
		;
	return (b);
}

/**
 * add_node_end - add a new node to the end of a new linked list
 * @head: dobuble the pointer to a linked list
 * @str: string to add to the new nodes
 *
 * Return: pointer to the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmp;


	if (str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = _strlen(new->str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	tmp = *head;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
	return (new);
}
