#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: entry
 * @needle: entry
 * Return:  pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int j;

	while (*haystack)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (*(haystack + j) != needle[j])
				break;
			if (needle[j + 1] == '\0')
				return (haystack);
		}
		haystack++;
	}
	return ('\0');
}
