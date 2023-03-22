#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 * @b: parameter for function
 * Return: lastDigit(last digit of the number)
 *
 */
int print_last_digit(int b)
{
	int lastDigit;

	if (b < 0)
	{
		lastDigit = ((-b) % 10);
		_putchar(lastDigit + '0');
		return (lastDigit);
	}
	else
	{
		lastDigit = b % 10;
		_putchar(lastDigit + '0');
		return (lastDigit);
	}
}
