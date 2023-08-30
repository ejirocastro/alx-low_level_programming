#include "lists.h"

/**
 * print_listint - function that prints element
 * @h: pointer to const struct
 * Return: count (success)
 */

size_t print_listint(const listint_t *h)
{
	int i = 0;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
