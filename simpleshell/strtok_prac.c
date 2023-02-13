#include <stdio.h>
#include <string.h>

/**
 *
 *
 */
int main(int ac, char *av)
{
	char *token;

	if (ac < 2)
		return (-1);


	/*return the first token*/
	token = strtok(&av[1], " ");

	while(token != NULL)
	{
		printf("%s\n", token);
		token = strtok(NULL, " ");
	}
	return (0);
}
