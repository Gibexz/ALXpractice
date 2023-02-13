#include <stdio.h>

struct User
{
	char *name;
	int age;
};

int main (void)
{
	struct User andrew;
	struct User *ptr;

	ptr = &andrew;

	ptr->age = 29;
	andrew.name = "Andrew";

	printf("His name is %s and he is %d years old\n", andrew.name, andrew.age);
	return (0);
}
