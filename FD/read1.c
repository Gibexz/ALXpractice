// C program to illustrate
// read system Call
#include<stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int main()
{
  int fd = open("text1.txt",  O_RDWR);
  dprintf(fd, "GibexzAndy");
  close(fd);
}
