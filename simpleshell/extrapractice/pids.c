#include <stdio.h>
#include <unistd.h>

/**
 *
 *
 */
int main(void)
{
	pid_t process_id;
	pid_t p_process_id;

	process_id = getpid();
	p_process_id = getppid();

	printf("pid = %d, while ppid = %d\n", process_id, p_process_id);

	return (0);
}
