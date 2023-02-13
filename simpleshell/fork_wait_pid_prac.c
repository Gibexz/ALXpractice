#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

/**
 *
 *
 */
int main(void)
{
	int stats;
	pid_t process_id;

	process_id = fork();
	if (process_id < 0)
	{
		perror("error ");
		return (1);
	}
	
	if (process_id == 0)
	{
		printf("Child pid is %u and parrnt pid is %u\n", getpid(), getppid());
		sleep(6);
	}

	else
	{
		wait(&stats);
		printf("Parent id is %u\n", getpid());
	}
	return (0);
}

