#include "main.h"
/**
 * print_line - draws a sraight line in the terminal
 *@n: number of time line is printed
 *
 * Return: void
 */

void print_line(int n)
{
	while (n--)
	{
		if (n <= 0)
			break;

		_putchar('_');
	}
	_putchar('\n');
}
