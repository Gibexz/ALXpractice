#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main(void)
{
	int c;
	int fd = open("andrew.txt", O_CREAT);

	c = write(fd, "Hello world\n", 9);
}
