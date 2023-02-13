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
	size_t command;

	buffer = (char *)malloc(buffsize * sizeof(char));
	if (buffer == NULL)
		return (-1);

	printf("$ ");
	command = getline(&buffer, &buffsize, stdin);
	printf("%s", buffer);

	return 0;
}
