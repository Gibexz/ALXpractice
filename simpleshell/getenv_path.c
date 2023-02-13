#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char *path, *token_path;

	path = getenv("PATH");
	if (path == NULL)
	{
		perror("null:");
		return 1;
	}

	token_path = strtok(path, ":");
	while (token_path != NULL)
	{
		printf("%s\n", token_path);
		token_path = strtok(NULL, ":");
	}

	return 0;
}
