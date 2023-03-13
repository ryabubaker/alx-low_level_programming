#include "main.h"
/**
 * factorial - factorial of a given number
 * @n: number
 * Return: If n is lower than 0, the function should return -1
 * to indicate an error else returns the factorial of the number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
