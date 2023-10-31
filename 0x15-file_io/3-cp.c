#include "main.h"

/**
 * handle_exit_with_error - handles errors and exiting codes
 * @code: the number to exit with
 * @message: the error message
 * @arg1: argument vector
 */

void handle_exit_with_error(int code, const char *message, const char *arg1)
{
	dprintf(STDERR_FILENO, message, arg1);
	exit(code);
}

/**
 * main - Entry function
 * @argc: argument count
 * @argv: argement vector
 * Return: 0
 */

int main(int argc, char **argv)
{
	char *file_from, *file_to;
	ssize_t read_bytes, write_bytes;
	int file_des_from, file_des_to;
	char buffer[BUF_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = argv[1];
	file_to = argv[2];

	file_des_from = open(file_from, O_RDONLY);
	if (file_des_from == -1)
		handle_exit_with_error(98, "Error: Can't read from file %s\n", file_from);

	file_des_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	if (file_des_to == -1)
		handle_exit_with_error(99, "Error: Can't read from file %s\n", file_to);

	while ((read_bytes = read(file_des_from, buffer, BUF_SIZE)) > 0)
	{
		write_bytes = write(file_des_to, buffer, read_bytes);
		if (write_bytes != read_bytes)
			handle_exit_with_error(99, "Error: Can't write to file %s\n", file_to);
	}
	if (read_bytes == -1)
	{
		handle_exit_with_error(98, "Error: Can't read from file %s\n", file_from);
	}

	if (close(file_des_from) == -1)
		handle_exit_with_error(100, "Error: Can't close fd %d\n", file_from);

	if (close(file_des_to) == -1)
		handle_exit_with_error(100, "Error: Can't close fd %d\n", file_to);

	return (0);
}
