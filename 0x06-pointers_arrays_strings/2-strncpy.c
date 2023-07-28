#include <string.h>

/**
 * _strncpy - a function that copies a string.
 * @dest: destination
 * @src: source
 * @n: bytes from src
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
