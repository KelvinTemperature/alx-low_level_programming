#include "main.h"

/**
 * read_textfile - reads a text file and prints it to stdout
 * @filename: file to read text
 * @letters: Number of letters to read and print
 * Return: number of letters read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_ptr;
	char *str;
	ssize_t bytes_read;

	if (filename == NULL)
		return (0);

	file_ptr = open(filename, O_RDONLY);
	if (file_ptr == -1)
		return (0);

	str = malloc(sizeof(char) * letters);
	if (str == NULL)
		return (0);

	bytes_read = read(file_ptr, str, letters);
	if (bytes_read > 0)
		write(STDOUT_FILENO, str, bytes_read);

	free(str);
	close(file_ptr);

	return (bytes_read);
}
