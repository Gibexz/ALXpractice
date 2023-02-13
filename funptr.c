#include <stdio.h>

void fun(int a)
{
	printf("The valua of a is %d", a);
}

int main(void)
{
	void (*funt)(int) = &fun;
	(*funt)(10);
}
