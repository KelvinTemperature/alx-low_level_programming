#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename to be created
 * @text_content: string to write to file
 * Return: 1 on success
 */

int create_file(const char *filename, char *text_content)
{
	int file_des, write_count, close_result;

	if (filename == NULL)
		return (-1);

	file_des = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file_des == -1)
		return (-1);

	if (text_content != NULL)
	{
		write_count = write(file_des, text_content, strlen(text_content));
		if (write_count == -1)
		{
			close(file_des);
			return (-1);
		}
	}
	close_result = close(file_des);
	if (close_result == -1)
		return (-1);

	return (1);
}
