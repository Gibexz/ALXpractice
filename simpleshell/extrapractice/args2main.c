#include <stdio.h>
#include <stdlib.h>

/**
 *
 *
 */

int main(int ac,char **av)
{
	int i;

	if (ac < 2)
	{
		return (-1);
		exit (95);
	}
	for (i = 1; i < ac; i++)
	{
		printf("%s\n", av[i]);
	}
	return 0;
}
