#include "lists.h"

/**
 * free_listint - free memory
 * @head: pointer to struct
 * Return: nothing (void)
 */

void free_listint(listint_t *head)
{
	int i;
	listint_t *temp;

	for (i = 0; head != NULL; i++)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
