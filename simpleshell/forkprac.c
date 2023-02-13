#include <stdio.h>
#include <unistd.h>

/**
 *
 *
 */
int main(void)
{
	pid_t my_pid;
	pid_t pid;

	printf("beforw fork\n");
	pid = fork();
	if (pid == -1)
	{
		return (1);
	}
	printf("After fork\n");

	my_pid = getpid();
	printf("my pid is %u\n", my_pid);
	return 0;
}
