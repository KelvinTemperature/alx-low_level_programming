#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: text to append
 * Return: 1 on success
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_des;
	int write_count, close_result;

	if (filename == NULL)
		return (-1);

	file_des = open(filename, O_WRONLY | O_APPEND);
	if (file_des == 0)
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
