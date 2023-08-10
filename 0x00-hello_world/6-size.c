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

	printf("Size of char: %ld byte(s)\n", sizeof(c));
	printf("Size of int: %ld bytes(s)\n", sizeof(i));
	printf("Size of long int : %ld bytes(s)\n", sizeof(l));
	printf("Size of long long : %ld bytes(s)\n", sizeof(ll));
	printf("Size of float: %ld bytes(s)\n", sizeof(f));
	return (0);
}
