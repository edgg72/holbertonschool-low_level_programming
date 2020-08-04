#include "holberton.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file
 *                 and prints it to the POSIX standard output.
 * @filename: name of the file.
 * @letters: how many letters it should read and print.
 *
 * Return: the actual number of letters it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t _read, write;
	char *buf;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);

	if (buf == NULL)
	{
		close(fd);
		return (0);
	}

	_read = read(fd, buf, letters);
	close(fd);

	if (_read == -1)
	{
		free(buf);
		return (0);
	}

	_write = write(STDOUT_FILENO, buf, lenr);
	free(buffer);

	if (_read != _write)
		return (0);


	return (_write);
}
