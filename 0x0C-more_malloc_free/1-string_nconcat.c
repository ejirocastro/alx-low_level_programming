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
	unsigned int i;
	unsigned int j = n;
	char *str;

	if (s1 == NULL)
		s1 = " ";

	if (s2 == NULL)
		s2 = " ";

	for (i = 0; s1[j]; i++)
		j++;


	str = malloc(sizeof(char *) * (j + 1));

	if (str == NULL)
		return (NULL);

	j = 0;

	for (i = 0; s1[i]; i++)
		str[j++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		str[j++] = s2[i];

	str[j] = '\0';

	return (str);
}
