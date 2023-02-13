#include <stdio.h>

/**
 *
 *
 *
 */
int main(int ac, char **av)
{
	int i = 1;
	int j;

	if (ac < 2)
		return -1;

	while (i < ac)
	{
		printf("%s\n", av[i]);
		i++;
	}

	for (j = 1; av[j] != NULL; j++)
	{
		printf("%s\n", av[j]);
	}
	return 0;
}
