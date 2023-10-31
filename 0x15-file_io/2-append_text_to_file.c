#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: name of file
 * @text_content: content to be wrrited into file
 * Return: 1 as success
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int count, file, wr;

	if (filename == NULL)
	{
		return (-1);
	}
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (count = 0; text_content[count] != '\0'; count++)
		{
		wr = write(file, &text_content[count], 1);
		if (wr == -1)
			return (-1);
		}
	}
	close(file);
	return (1);
}
