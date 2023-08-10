#include<stdio.h>
/**
 * main -To print the size of something.
 * Return:0 ( zero if doen)
 */
int main(void)
{
	char c;
	int i;
	long l;
	double ll;
	float f;

	printf("Size of a char: %lu byte(s)\n", sizeof(c));
	printf("Size of an int: %lu byte(s)\n", sizeof(i));
	printf("Size of a long int : %lu byte(s)\n", sizeof(l));
	printf("Size of a long long int : %lu byte(s)\n", sizeof(ll));
	printf("Size of a float: %lu byte(s)\n", sizeof(f));
	return (0);
}
