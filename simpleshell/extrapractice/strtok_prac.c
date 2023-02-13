#include <stdio.h>
#include <string.h>

/**
 *
 *
 */
int main(int ac, char *av)
{
	char *tok;
	char str[20] = "12@34@56@78@90";

	tok = strtok(str, "@");
	while (tok != NULL)
	{
		printf("%s\n", tok);
		tok = strtok(NULL, "@");
	}

	return (0);

}
