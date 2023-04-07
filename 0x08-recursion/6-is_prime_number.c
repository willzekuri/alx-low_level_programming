#include "main.h"

/* Prototype for checkPrime number */
int checkPrime(int n, int a);

/**
  * is_prime_number - Returns 1 if a number is prime and 0 otherwise
  *
  * @n: The parameter - number to be checked
  *
  * Return: 1(if number is prime) 0 otherwise
  */

int is_prime_number(int n)
{
	return (checkPrime(n, 1));
}

/**
  * checkPrime - Checks if number is prime
  *
  * @n: The number to be counted
  * @a: The iteration count
  *
  * Return: 1 for prime or 0 composite
  */
int checkPrime(int n, int a)
{
	if (n <= 1)
		return (0);

	if (n % a == 0 && a > 1)
		return (0);

	if ((n / a) < a)
		return (1);

	return (checkPrime(n, a + 1));
}
