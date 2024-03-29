#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of fd to read and print
 * @text_content: text to be written
 * Return: returns 1 on success and -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
	int new_file, written, closed;

	if (filename == NULL)
		return (-1);
	new_file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (new_file != -1 && text_content != NULL)
	{
		written = write(new_file, text_content, strlen(text_content));
	}
	closed = close(new_file);
	if (written && closed != -1)
		return (1);
	return (-1);
}
