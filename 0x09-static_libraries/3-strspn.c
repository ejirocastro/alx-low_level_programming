#include <string.h>

/**
 * _strspn - function that finds length of substring
 * @s:  pointer to the null-terminated string
 * @accept: consist of character s
 * Return: len
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len;

	len = strspn(s, accept);
	return (len);
}
