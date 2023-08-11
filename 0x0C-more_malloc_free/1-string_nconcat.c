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
	int j = 0;
	char *str;

	if (s1 == NULL)
		s1 = " ";

	if (s2 == NULL)
		s2 = " ";

	while (s1[j] != '\0')
		j++;


	str = malloc(sizeof(char *) * (j + n + 1));

	if (str == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		str[j + i] = s2[i];

	str[j + i] = '\0';

	return (str);
}
