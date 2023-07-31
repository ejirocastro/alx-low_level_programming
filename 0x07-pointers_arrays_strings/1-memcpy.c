#include <string.h>

/**
 * _memcpy - a function that copies memory area.
 * @dest: where memory will occupy
 * @src: where memory will be coppied
 * @n: bytes from memory area
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	{
	memcpy(dest, src, n);
	}
	return (dest);
}
