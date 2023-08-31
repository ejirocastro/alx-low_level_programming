#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end
 * @head: pointer to struct
 * @n: data of node
 * Return: the address of element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	int i;

	listint_t *addend = malloc(sizeof(listint_t));

	if (addend == NULL)
	{
		return (NULL);
	}
	else
	{
		addend->n = n;
		addend->next = NULL;
	}
	if (*head == NULL)
	{
		*head = addend;
	}
	else
	{
		listint_t *temp = *head;

		for (i = 0; temp->next != NULL; i++)
		{
			temp = temp->next;
		}
		temp->next = addend;
	}
	return (addend);
}
