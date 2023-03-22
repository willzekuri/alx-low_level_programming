#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers, starting from 1 and 2,
 * separated by a comma followed by a space
 *
 * Return: Always 0(success)
 */
int main(void)
{
	int count;
	unsigned long fib_ = 0, fib2 = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = fib_ + fib2;
		printf("%lu", sum);

		fib_ = fib2;
		fib2 = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
