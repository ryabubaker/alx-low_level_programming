#include <stdio.h>
/**
 *main - Prints the alphabet in lowercase and then in uppercase.
 *
 * Return: 0
 */

int main(void)
{
	char low;
	char high;

	for (low = 'a'; low <= 'z'; low++)
		putchar(low);

	for (high = 'A'; high <= 'Z'; high++)
		putchar(high);

	putchar('\n');
	return (0);
}
