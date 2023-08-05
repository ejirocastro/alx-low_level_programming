#include "main.h"

/**
 * char *_strcpy - function that copies the string.
 * @dest: destination.
 * @src: source.
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int i = 0;


	while (*(src + l) != '\0')
	{
	l++;
	}
	for ( ; i < l ; i++)
	{
	dest[i] = src[i];
	}
	dest[l] = '\0';
	return (dest);
}
