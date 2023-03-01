#include "main.h"
/**
 * rev_string - reverses string
 * @s: entry
 * Return: void
 */
void rev_string(char *s)
{
	char temp;
	int i, finish;

	finish = 0;

	while (s[finish] != '\0')
		finish++;
	finish--;

	for (i = 0; i < finish; i++)
	{
		temp = s[i];
		s[i] = s[finish];
		s[finish] = temp;
		finish--;
	}

}
