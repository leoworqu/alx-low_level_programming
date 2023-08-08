#include <stdio.h>

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: The name of the file.
 * @text_content: The NULL terminated string to add at the end of the file.
 *
 * Return: 1 on success, -1 on failure.
 * The function does not create the file if it does not exist.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file;
	int success = 1;
	size_t length = 0;

	if (filename == NULL)
		return (-1);

	file = fopen(filename, "a");
	if (file == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[length])
			length++;

		if (fwrite(text_content, sizeof(char), length, file) != length)
			success = -1;
	}

	if (fclose(file) == EOF)
		return (-1);

	return (success);
}
