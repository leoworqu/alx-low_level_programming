#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

/**
 * main - Copies the contents of one file to another file.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of strings containing the arguments.
 *
 * Return: 0 on success, or exit with an error code.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		fprintf(stderr, "Usage: cp file_from file_to\n");
		exit(EXIT_FAILURE);
	}

	int fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	int fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		fprintf(stderr, "Error: Can't write to %s\n", argv[2]);
		exit(EXIT_FAILURE);
	}

	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			fprintf(stderr, "Error: Can't write to %s\n", argv[2]);
			exit(EXIT_FAILURE);
		}
	}

	if (bytes_read == -1)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	if (close(fd_from) == -1)
	{
		fprintf(stderr, "Error: Can't close fd %d\n", fd_from);
		exit(EXIT_FAILURE);
	}

	if (close(fd_to) == -1)
	{
		fprintf(stderr, "Error: Can't close fd %d\n", fd_to);
		exit(EXIT_FAILURE);
	}

	return 0;
}
