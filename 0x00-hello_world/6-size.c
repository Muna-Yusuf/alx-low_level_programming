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

	printf("Size of char: %lu byte(s)\n", sizeof(c));
	printf("Size of int: %lu byte(s)\n", sizeof(i));
	printf("Size of long int : %lu byte(s)\n", sizeof(l));
	printf("Size of long long int : %lu byte(s)\n", sizeof(ll));
	printf("Size of float: %lu byte(s)\n", sizeof(f));
	return (0);
}
