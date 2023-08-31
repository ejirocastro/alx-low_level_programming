#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning
 * @head: pointer to struct
 * @n: new data
 * Return: address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *addnew = malloc(sizeof(listint_t));

	if (addnew == NULL)
	{
		return (NULL);
	}
	addnew->n = n;
	addnew->next = NULL;

	addnew->next = *head;
	*head = addnew;
	return (addnew);
}
