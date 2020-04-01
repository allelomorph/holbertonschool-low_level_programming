#include "holberton.h"

/**
 * main - entry point
 *
 * @argc: number of arguments to main, including filename of program
 *
 * @argv: array of strings containing arguments entered on command line
 *
 * Return: 0 on success
 */

/*
 * open(,,mode) arg written numerically to avoid line width overrun.
 * 00664 = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH
 * likewise, when used with dprintf, 2 = STDERR_FILENO
 */

int main(int argc, char **argv)
{
	long int file_from, file_to, r_bytes, w_bytes;
	int c_ret[2];
	char *buffer;
	unsigned int i, bf_sz = 1024;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	if (file_from < 0)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 00664);
	buffer = malloc(sizeof(char) * bf_sz);
	if (file_to < 0 || !buffer)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	do {
		r_bytes = read(file_from, buffer, bf_sz);
/*		printf("r_bytes: %li\n", r_bytes); */
		if (r_bytes < 0)
		{
			dprintf(2, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w_bytes = write(file_to, buffer, r_bytes);
/*		printf("w_bytes: %li\n", w_bytes); */
		if (w_bytes < 0)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
	} while (r_bytes == bf_sz);

	free(buffer);
	c_ret[0] = close(file_from);
	c_ret[1] = close(file_to);
	for (i = 0; i < 2; i++)
	{
		if (c_ret[i] < 0)
		{
			dprintf(2, "Can't close fd %d\n", c_ret[i]);
			exit(100);
		}
	}

	return (0);
}
