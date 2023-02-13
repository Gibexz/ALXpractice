// C program to illustrate
// read system Call
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>

int main()
{
  char c;
  int fd1 = open("text.txt", O_RDONLY, 0);
  int fd2 = open("text.txt", O_RDONLY, 0);
  read(fd1, &c, 5);
  read(fd2, &c, 14);
  printf("c = %c\n", c);
  close(fd1);
  close(fd2);
  exit(0);
}
