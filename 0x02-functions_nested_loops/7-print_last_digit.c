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
	int mod = b % 10;

	lastDigit = mod;

	_putchar(lastDigit);
	return (lastDigit);
}
