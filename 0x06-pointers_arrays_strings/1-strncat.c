#include "main.h"
/**
 * *_strncat - concatenates two strings
 * @dest: destination
 * @src: source
 * @n: bytes from src
 *
 * Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, dest_len;

	for (dest_len = 0; dest[dest_len] != '\0'; dest_len++)
		;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}
