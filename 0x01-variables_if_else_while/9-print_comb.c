#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - Entry point
*Code prints out all possible cobinations of single digit number
*Numbers are printed in ascending order
*Allows the use of only putchar 4 times
*Return: Always 0 (Success)
*
*/
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
		if (num < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
