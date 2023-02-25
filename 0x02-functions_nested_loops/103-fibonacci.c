#include <stdio.h>
/**
 * main -By considering the terms in the Fibonacci sequence whose values
 * do not exceed 4,000,000, write a program that finds and prints the sum of
 * the even-valued terms
 * Return: 0
 */

int main(void)
{
	long int i, a, b, c, res;
	a = res = 0;
	i = b = 1;

	while(i++)
	{
		c = a + b;
		a = b;
		b = c;

		if (c % 2 == 0 && c < 4000000)
			res += c;
		if (res > 4000000)
			break;
	}
	printf("%li\n", res);
	return (0);
}
