#include "main.h"
/**
 * print_line - draws a sraight line in the terminal
 *@n: number of time line is printed
 *
 * Return: void
 */

void print_line(int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		if (n > 0)
			_putchar(95);
	}
	_putchar('\n');
}
