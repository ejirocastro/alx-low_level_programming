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
	unsigned int len1 = 0;
	unsigned int k = 0;
	unsigned int len2 = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
		n = len2;

	s = malloc(sizeof(char) * (len1 + n + 1));

	if (s == NULL)
		return (NULL);

	for (k = 0; k < len1; k++)
		s[k] = s1[k];

	for (k = 0; k < n; k++)
		s[len1 + k] = s2[k];

	s[len1 + n] = '\0';

	return (s);
}
