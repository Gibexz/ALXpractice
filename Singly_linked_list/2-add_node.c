#include "lists.h"

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
	{
		printf("error\n");
		return (NULL);
	}
		temp->str = strdup(str);
		temp->len = strlen(temp->str);
		temp->next = *head;
		*head = temp;
	return (*head);
}
