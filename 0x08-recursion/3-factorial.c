#include "main.h"
/**
 * factorial - int of factorial
 * @n:number to return the worker
 * Return:int
 */
int factorial(int n)
{
	int hicham;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		hicham = n * factorial(n - 1);
	}
	return (hicham);
}
