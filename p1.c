#include <stdio.h>
#include <stdarg.h>

void printargs(int arg1,...)
{
	va_list a;
	int i;

	va_start(a, arg1);
	for (i = arg1; i >= 0; i = va_arg(a, int))
		printf("%d, ", i);
	va_end(a);
	putchar('\n');
}

void printsum(int count,...)
{
	int i, sum = 0;
	va_list ap;

	va_start(ap, count);

	for (i = 0; i < count; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	printf("%d\n", sum);
}

int main(void)
{
	printargs(5, 2, 'e', 85, 35, -1, 0, 9);
	printsum(4,5,3,5,6);
	return(0);
}
