#include <stdlib.h>

/**
 *
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newptr;
	char *ptr2;
	char *newptr2;
	unsigned o, n, i;

	o = old_size;
	n = new_size;

	if (n == o)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		o = 0;
	}
	if (n == 0 && ptr != NULL)	
	{
		free(ptr);
		return (NULL);
	}
	newptr = malloc(n);

	ptr2 = ptr;
	newptr2 = newptr;
	for (i = 0; i < o; i++)
	{
		newptr2[i] = ptr2[i];
	}
	newptr = newptr2;
	return (newptr);

}
