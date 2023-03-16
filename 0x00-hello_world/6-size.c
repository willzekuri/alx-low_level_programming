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

	printf("The size of char is: %ld byte(s)\n", sizeof(c));
	printf("The size of int is: %ld bytes(s)\n", sizeof(a));
	printf("The size of long int is: %ld byte(s)\n", sizeof(f));
	printf("The size of long long int is: %ld byte(s)\n", sizeof(x));
	printf("The size of float is: %ld byte(s)\n", sizeof(b));

	return (0);
}
