#include "holberton.h"

/**
 * append_text_to_file - appends text at the end of a file
 *
 * @filename: string containing name of file
 *
 * @text_content: NULL terminated string to add to end of file
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	long int fd, cnt_len, w_bytes;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
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
