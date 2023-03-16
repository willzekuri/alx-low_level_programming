/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
#include <stdio.h>
int main(void)
{
	char c;
	int a;
	long int f;
	long long int x;
	float b;

	printf("Size of char is: %ld byte(s)\n", sizeof(c));
	printf("Size of int is: %ld bytes(s)\n", sizeof(a));
	printf("Size of long int is: %ld byte(s)\n", sizeof(f));
	printf("Size of long long int is: %ld byte(s)\n", sizeof(x));
	printf("Size of float is: %ld byte(s)\n", sizeof(b));

	return (0);
}
