#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it
 * @filename: const string
 * @letters: numbers of strings
 * Return: numbers of letters read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	char *data;
	ssize_t rd, wd;

	if (filename == NULL)
	{
		return (0);
	}
	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		return (0);
	}
	data = malloc(sizeof(char) * letters);
	if (data == NULL)
	{
		return (0);
	}
	rd = read(file, data, letters);
	wd = write(STDOUT_FILENO, data, rd);
	if ((rd && wd == -1) || rd != wd)
	{
		return (0);
	}
	free(data);
	close(file);
	return (wd);
}
