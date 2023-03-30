#include "lists.h"

/**
 * free_list - free a list
 * @head: head of the list.
 * Return: freed list.
 */
void free_list(list_t *head)
{
	list_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
	}
}
