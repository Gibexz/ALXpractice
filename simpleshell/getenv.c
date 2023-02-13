#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *path;

	path = getenv("PATH");
	if (path == NULL)
	{
		perror("null:");
		return 1;
	}
	printf("%s\n", path);
	return 0;
}
