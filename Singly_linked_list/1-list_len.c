#include "lists.h"

size_t list_len(const list_t *h)
{
	size_t n = 1;

	while (h)
	{
		h = h->next;
		n++;
	}
	return (n);
}
