#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
  * main - Entry point
  * Return: Always 1 (Success)
  */
/* betty style doc for function main goes there */
#include <stdio.h>

int main(void)
{
	int fd, sd, td;

for (fd = '0'; fd <= '9'; fd++)
{
	for (sd = fd + 1; sd <= '9'; sd++)
	{
		for (td = sd + 1; td <= '9'; td++)
		{
			putchar(fd);
			putchar(sd);
			putchar(td);
			if (fd != '7' || sd != '8' || td != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
}
putchar('\n');
return (0);
}
