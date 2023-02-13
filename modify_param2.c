#include <stdio.h>
/**
 * modif_my_char_var - Function to modify the char value of 
 * main function
 *
 * Return: Nothing
 */
void modif_my_char_var(char *cc,char ccc)
{
	printf("value of 'cc': %p\n", cc);
	*cc = 'o';
	printf("address of 'cc': %p\n", &cc);
	ccc = 1; /* of no use */
}
/**
 * main - function with variable to be modified
 *
 * Return: Always 0.
 */
int main(void)
{
	char c;
	char *p;

	p = &c;
	c = 'H';

	printf("value of 'c' before call: %c\n", c);
	printf("address of 'c'before call: %p\n", &c);
	printf("Value of 'p': %p\n", p);
	printf("address of 'p': %p\n", &p);
	modif_my_char_var(p,c);/* C will not copy the value of ccc, but *p will copy *cc to c */
	printf("value of 'c' after call: %c\n", c);
	return (0);

}
