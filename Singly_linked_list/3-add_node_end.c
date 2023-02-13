#include "lists.h"

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *temp;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);
	newnode->len = strlen(newnode->str);
	if (*head == NULL)
	{
		newnode->next = *head;
		*head = newnode;
	}
	else
	{
		newnode->next = NULL;
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = newnode;
	}
	return (newnode);
}
