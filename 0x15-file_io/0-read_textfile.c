#include "main.h"

/**
 * read_textfile - reads a text file and prints it to stdout
 * @filename: file to read text
 * @letters: Number of letters to read and print
 * Return: number of letters read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file_ptr;
	char *str;
	ssize_t bytes_read;

	if (filename == NULL)
		return (0);

	file_ptr = fopen(filename, "r");
	if (file_ptr == NULL)
		return (0);

	str = malloc(letters);
	if (str == NULL)
		return (0);

	bytes_read = fread(str, 1, letters, file_ptr);
	if (bytes_read > 0)
		fwrite(str, 1, bytes_read, stdout);

	free(str);
	fclose(file_ptr);

	return (bytes_read);
}
