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

	printf("Size of a char: %ld byte(s)\n", sizeof(c));
	printf("Size of an int: %ld bytes(s)\n", sizeof(a));
	printf("Size of a long int: %ld byte(s)\n", sizeof(f));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(x));
	printf("Size of a float: %ld byte(s)\n", sizeof(b));

	return (0);
}
