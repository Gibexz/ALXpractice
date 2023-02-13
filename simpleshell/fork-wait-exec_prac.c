#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

/**
 *
 *
 */
int main(void)
{
	int i;
	int status;
	pid_t process;
	char *argv[] = {"/bin/ls", "-l", "/tmp", NULL};

	for (i = 0; i < 5; i++)
	{
		process = fork();

		/* Error check */
		if (process == -1)
		{
			perror("Error:");
			return (1);
		}

		/* Child Process */
		if (process == 0)
		{
			if (execve(argv[0], argv, NULL) == -1)
			{
				perror("Error:");
			}
		}

		/* Parent process */
		else
		{
			wait(&status);
			printf("%d\n", getppid());
		}
	}
	printf("Start\n");
	printf("Stop\n");
	return 0;
}
