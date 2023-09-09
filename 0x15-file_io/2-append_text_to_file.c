#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @text_content: terminated string to add at the end of the file
 * @filename: name of file
 * Return: 1 on success -1 on error
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int store, temp, i, length = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			length++;
	}
	store = open(filename, O_WRONLY | O_APPEND);
	if (store == -1)
	{
		return (-1);
	}
	temp = write(store, text_content, length);
	if (temp == -1)
	{
		return (-1);
	}
	close(store);
	return (1);
}
