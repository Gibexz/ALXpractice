#include <stdio.h>
#include <stdlib.h>

struct User
{
	int age;
	char *fname;
	char *lname;
};

struct User *new_user(char* fname, char* lname, int age)
{
	struct User *user2;

	user2 = malloc(sizeof(struct User));
	if (user2 == NULL)
		return (NULL);

	user2->fname = fname;
	user2->lname = lname;
	user2->age = age;
	return (user2);
}
int main(void)
{
	struct User *user;
	struct User *bobo;

	bobo = new_user("Chidindu", "Esogibe", 26);
	user = new_user("Chidubem", "Esogibe", 29);
	if (user == NULL)
	{
		return (1);
		exit(95);
	}

	printf("%s %s is %d years old\n", user->fname, user->lname, user->age);
	printf("%s %s is %d years old\n", bobo->fname, bobo->lname, bobo->age);
	return (0);
}

