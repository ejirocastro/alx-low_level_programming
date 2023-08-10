#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments
 * @ac: argument counts
 * @av: arguments
 * Return: a pointer
 */

char *argstostr(int ac, char **av)
{
	int temp = 0;
	int i = 0;
	int j = 0;
	int k = 0;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			temp++;
			j++;
		}
		i++;
	}
	temp = temp + ac + 1;
	str = malloc(sizeof(char) * temp);
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	return (str);
}
