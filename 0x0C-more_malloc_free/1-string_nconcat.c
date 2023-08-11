#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: destination
 * @s2: source string
 * @n: amount of byte allocated
 * Return: NULL if it fails & a pointer otherwise
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int tem = n;
	unsigned int k;

	if (s1 == NULL)
		s1 = " ";

	if (s2 == NULL)
		s2 = " ";

	for (k = 0; s1[k]; k++)
		tem++;


	s = malloc(sizeof(char) * (tem + 1));

	if (s == NULL)
		return (NULL);

	tem = 0;

	for (k = 0; s1[k]; k++)
		s[tem++] = s1[k];

	for (k = 0; s2[k] && k < n; k++)
		s[tem++] = s2[k];

	s[tem] = '\0';

	return (s);
}
