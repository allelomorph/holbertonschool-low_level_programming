#include "holberton.h"

/**
 * close_error - helper to condense close error return to single line of code
 * @fd: file descriptor that failed to close
 */

void close_error(long int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %li\n", fd);
	exit(100);
}

/**
 * dpf_error - helper to condense other error return to single line of code
 * @readout: error message describing failure
 * @filename: file that caused failure
 * @exit_c: exit code
 */

void dpf_error(char *readout, char *filename, int exit_c)
{
	dprintf(STDERR_FILENO, "%s%s\n", readout, filename);
	exit(exit_c);
}

/**
 * main - entry point
 * @argc: number of arguments to main, including filename of program
 * @argv: array of strings containing arguments entered on command line
 * Return: 0 on success
 */

/*
 * open(,,mode) arg written numerically to avoid line width overrun.
 * 00664 = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH
 */

int main(int argc, char **argv)
{
	long int file_from, file_to, r_bytes, w_bytes;
	char buffer[1024];
	int close_v;

	if (argc != 3)
		dpf_error("Usage: cp file_from file_to", "", 97);

	file_from = open(argv[1], O_RDONLY);
	if (file_from < 0)
		dpf_error("Error: Can't read from file ", argv[1], 98);

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 00664);
	if (file_to < 0)
		dpf_error("Error: Can't write to ", argv[2], 99);

	do {
		r_bytes = read(file_from, buffer, 1024);
		if (r_bytes < 0)
			dpf_error("Error: Can't read from file ", argv[1], 98);

		w_bytes = write(file_to, buffer, r_bytes);
		if (w_bytes < r_bytes)
			dpf_error("Error: Can't write to ", argv[2], 99);

	} while (r_bytes == 1024);

	close_v = close(file_from);
	if (close_v < 0)
		close_error(file_from);
	close_v = close(file_to);
	if (close_v < 0)
		close_error(file_to);

	return (0);
}
