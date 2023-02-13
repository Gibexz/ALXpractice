#include <stdio.h>
#include <unistd.h>

/**
 * main - execve example
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

  char *argv[] = {"/bin/ls", "-l", "/usr/", NULL};

  printf("Before execve\n");
  i = execve(argv[0], argv, NULL);
  printf("After execve, %d\n", i);
  return (0);
}
