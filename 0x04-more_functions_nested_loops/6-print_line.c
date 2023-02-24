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

	if (n > 0)
	{
		for (x = 1; x <= n; x++)
			_putchar(95);
	}
	_putchar('\n');
}
