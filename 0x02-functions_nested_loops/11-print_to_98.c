#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: starts counting from this number
 *
 * Return: void
 */

void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%i", i);
			if (i == 98)
				break;
			printf(", ");
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			printf("%i", i);
			if (i == 98)
				break;
			printf(", ");
		}
	}
	printf("\n");
}
