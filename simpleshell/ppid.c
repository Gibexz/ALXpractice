#include <unistd.h>
#include <stdio.h>

/**
 *
 *
 */
int main(void)
{
	pid_t my_ppid;


	my_ppid = getppid();
	printf("%d\n", my_ppid);

	return (0);
}
