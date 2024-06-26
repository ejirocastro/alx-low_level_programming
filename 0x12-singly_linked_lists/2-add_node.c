#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds a node at the beginning of a linked list
 *
 * @head: a pointer to a pointer to the head of the list 🙃
 *
 * @str: a string
 *
 * Return: new node
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int x = 0;
	list_t *node;

	node = (list_t *)malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	node->str = strdup(str);
	if (node->str == NULL)
	{
		free(node);
		return (NULL);
	}
	for (x = 0; str[x]; x++)
		continue;
	node->len = x;
	node->next = *head;
	*head = node;
	return (node);
}
