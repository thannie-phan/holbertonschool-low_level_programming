#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - read the text file
 * @filename: name of file
 * @letters: how many letters to read and print
 *
 * Return: no of letters the function read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes_read, bytes_written;
	char *store_content;

	if (filename == NULL)
	return (0);

	store_content = malloc(sizeof(char) * letters);

	if (store_content == NULL)
	return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		free(store_content);
		return (0);
	}

	bytes_read = read(fd, store_content, letters);
	if (bytes_read == -1)
	{
		free(store_content);
		close(fd);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, store_content, bytes_read);

	if (bytes_written != bytes_read)
	{
		free(store_content);
		close(fd);
		return (0);
	}
	free(store_content);
	close(fd);

	return (bytes_written);
}
