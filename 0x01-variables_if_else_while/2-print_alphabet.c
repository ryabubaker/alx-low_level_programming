#include <stdio.h>
/**
 *main - Prints the alphabet in lowercase.
 *
 * Return: 0
 */

int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
		putchar(low);

	putchar('\n');

	return (0);
}
