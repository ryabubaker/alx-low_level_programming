#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: entry
 * Return: void
 */
void puts_half(char *str)
{
	int i, len, m;

	for (i = 0; str[i] != '\0'; i++)
		len++;

	if (len % 2 == 0)
		m = len / 2;
	else
		m = (len + 1) / 2;

	for (i = m; i < len; i++)
		_putchar(str[i]);

	_putchar('\n');
}
