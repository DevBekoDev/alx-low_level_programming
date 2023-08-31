#include "main.h"

/**
 * test_prime - Entry
 * Description: checks for every possible value
 * if the number is prime number
 * @i: number
 * @j: number that iterates from 1 to i
 * Return: 1 in success, -1 on error
 */

int test_prime(int i, int j)
{
	if (i == j)
	{
		return (1);
	}
	else if (i % j == 0)
	{
		return (0);
	}
	return (test_prime(i, j + 1));
}


/**
 * is_prime_number - Entry
 * Description: a function that returns 1
 * if the input integer is a prime number,
 * otherwise return 0.
 * @n: number
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (test_prime(n, 2));
}
