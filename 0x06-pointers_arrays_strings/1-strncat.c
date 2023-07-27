#include <string.h>

/**
 * _strncat -  a function that concatenates two strings
 * @dest: destination
 * @src: source
 * @n: bytes from src
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
