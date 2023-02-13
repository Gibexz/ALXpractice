#include <stdio.h>

void add(int a, int b)
{
	int sum;

	sum = a + b;
	printf("%d\n", sum);
}
void multiply(int a, int b)
{
	printf("%d\n", (a * b));
}
void modulus(int a, int b)
{
	printf("%d\n", a % b);
}
int main (void)
{
	int i = 0;

	void (*fptr_arr[3])(int c, int d) = {add, multiply, modulus};

	for (; i < 3; i++ )
	{
		(*fptr_arr[i])(46, 3);
	}
	return (0);
}

