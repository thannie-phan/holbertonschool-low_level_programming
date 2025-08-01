#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * append_text_to_file - add more text to end of file
 * @filename: name of file
 * @text_content: content to put in file at the end
 *
 * Return: 1 if success or -1 if fail
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, write_bytes = 0;

	if (filename == NULL)
	return (-1);

	if (text_content == NULL)
	text_content = "";

	if (filename != NULL)
		while (text_content[write_bytes] != '\0')
		{
			write_bytes++;
		}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	return (-1);

	write(fd, text_content, write_bytes);
	close(fd);
	return (1);
}
