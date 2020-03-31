#include "holberton.h"

/**
 * read_textfile - reads the contents of a text file and prints it to the
 * POSIX standard output
 *
 * @filename: string containing name of file
 *
 * @letters: amount of characters to read and print
 *
 * Return: amount of characters successfully read and printed
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
	long int fd, r_bytes, w_bytes;
	char *output;

	output = malloc(sizeof(char) * letters);
	if (!output || !filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		close(fd);
		free(output);
		return (0);
	}

	r_bytes = read(fd, output, letters);
	if (r_bytes < 0)
	{
		close(fd);
		free(output);
		return (0);
	}

	w_bytes = write(STDOUT_FILENO, output, r_bytes);
	if (w_bytes < r_bytes)
	{
		close(fd);
		free(output);
		return (0);
	}
	close(fd);
	free(output);
	return (w_bytes);
}
