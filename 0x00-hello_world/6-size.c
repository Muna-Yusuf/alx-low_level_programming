#include<stdio.h>
/**
 * main -To print the size of something.
 * Return:0 ( zero if doen)
 */
int main(void)
{
	char a;
	int b;

	long char aa;
	long int bb;
	float c;

	printf("Size of a char:", sizeof(a), "byte(s)\n");
	printf("Size of an int:", sizeof(b), "byte(s)\n");
	printf("Size of a char:", sizeof(bb), "byte(s)\n");
	printf("Size of a char:", sizeof(aa), "byte(s)\n");
	printf("Size of a float:", sizeof(c), "byte(s)\n");
	return (0);
}
