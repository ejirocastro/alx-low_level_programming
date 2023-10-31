#include "main.h"

/**
 * create_file - function that creats,write,trunc file
 * @filename: file to be created
 * @text_content: text to be written to the file
 * Return: 1 on success
 */

int create_file(const char *filename, char *text_content)
{
	int file;
	int wr;
	int count;

	if (filename == NULL)
	{
		return (-1);
	}
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (-1);
	}
	for (count = 0; text_content[count] != '\0'; count++)
	{
		wr = write(file, &text_content[count], 1);
		if (wr == -1)
			return (-1);
	}
	close(file);
	return (1);
}
