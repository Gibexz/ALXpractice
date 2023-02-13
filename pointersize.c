#include <stdio.h>

/**
 * main - printing the size, in bytes, of a pointer
 *
 * Return: Always 0.
 */
int main(void)
{
	int *p1;
	char *p2;

	printf("Size if pointer *p1: %lu\n", sizeof(p1));
	printf("Size if pointer *p2: %lu\n", sizeof(p2));
	return (0);
}
