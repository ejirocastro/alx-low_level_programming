#include "lists.h"

/**
 * listint_len - returns the number of element
 * @h: pointer to struct
 * Return: number of element(i)
 */

size_t listint_len(const listint_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
