#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * Return: 0
 */

int main(void)
{
	long int i, temp;
	long int a = 1;
	long int b = 2;

	printf("%li, %li, ", a, b);
	for (i = 0; i < 48; i++)
	{
		temp = a + b;
		a = b;
		b = temp;
		printf("%li", temp);
		if (i != 47)
			printf(", ");
	}
	putchar('\n');
	return (0);
}
