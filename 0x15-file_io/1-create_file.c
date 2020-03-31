#include "holberton.h"

/**
 * create_file - creates a file
 *
 * @filename: string containing name of file
 *
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */


int create_file(const char *filename, char *text_content)
{
	long int fd, cnt_len, w_bytes;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd < 0)
	{
		return (-1);
	}

	if (!text_content)
		cnt_len = 0;
	else
	{
		for (cnt_len = 0; text_content[cnt_len]; cnt_len++)
		{}
	}

	w_bytes = write(fd, text_content, cnt_len);
	if (w_bytes < 0)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
