#include "main.h"
/**
 * append_text_to_file - creates a file
 * @filename: name of file to modify
 * @text_content: text to be written
 * Return: returns 1 on success and -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int file, written, closed;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_WRONLY | O_APPEND);
	if (file != -1 && text_content != NULL)
		written = write(file, text_content, strlen(text_content));
	closed = close(file);
	if (written && closed != -1)
		return (1);
	return (-1);
}
