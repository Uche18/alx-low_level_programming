#include "lists.h"
#include <string.h>

/**
 * add_node - a function that adds a new node at the beginning
 * of a list_t list.
 * @head: pointer to a list_t pointer that points to the head struct
 * @str: pointer to string that adds a node
 * Return: pointer to new head of list, NULL on failure
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int len = 0;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	while (str[len])
		len++;

	temp->len = len;
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;
	return (temp);
}
