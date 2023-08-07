#include "main.h"

/**
 * _strlen - Entry point
 * _strlen: ...
 * @s: ...
 * Return: ...
 */
int _strlen(char *s)
{
	int x = 0;

	if (!s)
		return (0);
	while (*s++)
		x++;
	return (x);
}

/**
 * append_text_to_file - Entry point
 * append_text_to_file: ...
 * @filename: ...
 * @text_content: ...
 * Return: ..
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (len)
		bytes = write(fd, text_content, len);
	close(fd);
	return (bytes == len ? 1 : -1);
}
