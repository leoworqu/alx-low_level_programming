#include <stdio.h>
#include "main.h"

/**
 * read_textfile - Reads a text file and
 * prints it to the POSIX standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed, or 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	size_t num_letters_read = 0;
	char buffer[1024];
	size_t num_bytes_written;
	size_t num_bytes_read;

	if (filename == NULL)
		return (0);

	file = fopen(filename, "r");
	if (file == NULL)
		return (0);

	while (num_letters_read < letters)
	{
		num_bytes_read = fread(buffer, sizeof(char), sizeof(buffer), file);
		if (num_bytes_read == 0)
			break; /* End of file or error occurred */

		num_bytes_written = fwrite(buffer, sizeof(char), num_bytes_read, stdout);
		if (num_bytes_written != num_bytes_read)
		{
			fclose(file);
			return (0);
		}

		num_letters_read += num_bytes_read;
	}

	fclose(file);
	return (num_letters_read);
}
