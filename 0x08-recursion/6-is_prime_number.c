#include "main.h"

/**
 * check - checks to see if number is prime
 * @fakir:int
 * @hicham:nt
 * Return: 1 if n is a prime number, 0 if not
 */
int check(int fakir, int hicham)
{
	if (hicham < 2 || hicham % fakir == 0)
		return (0);
	else if (fakir > hicham / 2)
		return (1);
	else
		return (check(fakir + 1, hicham));
}

/**
 * is_prime_number - states if number is prime
 * @n:number to evaluate
 * Return:1 if n is prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (check(2, n));
}
