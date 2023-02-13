// C program to illustrate
// read system Call
#include<stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>

int main()
{
  int fd[2], sz;
  char buf[12];
  
  fd[0] = open("text.txt", O_RDWR | O_CREAT | O_TRUNC, 0644);
  fd[1] = open("text.txt", O_RDWR);

  if (fd[0] < 0)
  { 
	  perror("r1");
	  exit(1);
  }

  sz = write(fd[0], "GibexzAndy\n", strlen("GibexzAndy\n"));
  printf("%d\n", sz);
  write(1, buf, read(fd[1], buf, 12));

  close(fd[0]);
  close(fd[1]);

}
