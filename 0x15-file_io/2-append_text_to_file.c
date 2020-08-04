B#include "holberton.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * append_text_to_file - appends a text at the end of a file.
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{

	int i, fd;
	ssize_t _append;


	if (filename == NULL)
		return (-1);


	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
		for (i = 0; textcontent[i]; i++)
			;
		_append = write(fd, text_content, i);
		close(fd);

	if (append == -1)
		return (-1);

	return (1);
}
