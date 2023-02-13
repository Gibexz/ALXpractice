#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdbool.h>

/**
 *
 *
 */
int main(int ac, char *av)
{
	int status;
	
	pid_t m_process;
	size_t buffsize = 1000;
	char *buffer = malloc(buffsize * sizeof(char));
	char *argve[] = {buffer, NULL};
	size_t get;

	do {	
	get = getline(&buffer, &buffsize, stdin);
	printf("%lu\n%s", get, buffer);

	m_process = fork();

	if (m_process < 0)
	{
		perror("Error:");
		return (1);
	}
	if (m_process == 0)
	{
		if (execve(buffer, argve, NULL) == -1)
		{
			perror("Error:");
			return (1);
		}
		printf("Hi %lu\n", get);
	}
	else
	{
		wait(&status);
		printf("The end\n");
	}
	} while (true);

	return 0;
}
