#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - read the text file
 * @filename: name of file
 * @text_content: content to put in file
 *
 * Return: 1 if success or -1 if fail
 */

int create_file(const char *filename, char *text_content)
{
	int fd, write_bytes = 0;

	if (filename == NULL)
	return (-1);

	if (text_content == NULL)
		text_content = "";

	while (text_content[write_bytes] != '\0')
		write_bytes++;

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
	return (-1);

	write(fd, text_content, write_bytes);
	close(fd);
	return (1);
}
