#include "lists.h"

/**
 * add_note - Function that a new node at start of list
 * @head: pointer to pointer the head of linked list
 * @str: pointer to string
 * Return: address of new element or NULL if it failed
 */
list_t *add_note(list_t **head, const char *str)
{
       	list_t *newnode;
	list_t *charA;

	newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->str = strdup(str);
	if (newnode->str == NULL)
	{
		free(newnode);
		return (NULL);
	}

	newnode->next = *head;
	*head = newnode;
	while (charA != NULL)
	{
		charA = charA->next;
	}
	return (newnode);
}
