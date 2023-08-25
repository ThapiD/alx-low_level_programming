#include "lists.h"

/**
 * free_list - Function that frees a list
 * @head: pointer
 * Return: void
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		list_t *temp = head;

		head = head->next;
		free(temp->str);
		free(temp);
	}
}
