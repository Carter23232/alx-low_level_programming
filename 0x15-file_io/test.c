#include "main.h"

void readfile (const char *filename, size_t letters)
{
	int fd;

	char *buffer;

	fd = open(filename, O_RDONLY);
	buffer = malloc(sizeof(char) * (letters));
read(fd, buffer, letters);
	close(fd);

}

int main(void)
{
	readfile("test.txt", 114);
	return (0);
}
