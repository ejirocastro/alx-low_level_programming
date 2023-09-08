#include "main.h"

/**
 * read_textfile - reads and prints a text file
 * @filename: file to be reed and printed from
 * @letters: number of letters printed
 * Return: number of letters success
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t store, temp, temp2;
	char *contain;

	if (filename == NULL)
	{
		return (0);
	}
	store = open(filename, O_RDONLY);
	{
		if (store == -1)
		{
			return (0);
		}
		contain = malloc(sizeof(char) * letters);
		if (contain == NULL)
		{
			return (0);
		}
		temp = read(store, contain, letters);
		temp2 = write(STDOUT_FILENO, contain, temp);

		if (temp2 != temp || temp2 == -1)
		{
			return (0);
		}
		close(store);
		free(contain);
		return (temp2);
	}
}
