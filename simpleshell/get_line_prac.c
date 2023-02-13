#include <stdio.h>
#include <stdlib.h>

/**
 *
 *
 */
int main(void)
{
	char *buffer;
	size_t buffsize = 100;
	size_t characters;

	buffer = (char *)malloc(buffsize * sizeof(char));
	if (buffer == NULL)
		return (-1);

	printf("$ ");
	characters = getline(&buffer, &buffsize, stdin);
	printf("%lu nos of characters\n", characters);
	printf("%s", buffer);

	return (0);
}
