#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
  int i;
  char *token;

  for (i = 1; argv[i] != NULL; i++)
  {
    token = strtok(argv[i], ",");
    while (token != NULL)
    {
      printf("%s\n", token);
      token = strtok(NULL, ",");
    }
  }

  return 0;
}
