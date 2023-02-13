#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

void forkexample()
{
  int x = 1;

  if (fork() == 1)
    printf("Parent has x = %d\n", ++x);
  else
    printf("Child has x = %d\n", --x);
}
int main()
{
  forkexample();
  return 0;
}
