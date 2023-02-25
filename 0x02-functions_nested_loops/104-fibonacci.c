#include <stdio.h>
/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 * Return: 0
 */

int main(void)
{
	unsigned long count, i, j, k;

	i = j = 1;

	printf("1, ");
	for (count = 1; count < 98; count++)
	{
		k = i + j;
		i = j;
		j = k;

		printf("%lu", k);
		if (count != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
