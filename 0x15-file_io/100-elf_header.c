#include "main.h"

/**
 * print_elf_header - prints elf-header
 * @header: pointer to file
 */

void print_elf_header(const Elf32_Ehdr *header)
{
	int i = 0;

	printf("ELF Header:\n");
	printf("  Magic:   ");
	while (i < EI_NIDENT)
		printf("%02X ", header->e_ident[i]), i++;
	printf("\n");
	printf("  Class:                             %u-bit\n", header->e_ident[EI_CLASS] == ELFCLASS32 ? 32 : 64);
	printf("  Data:                              %s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "unknown");
	printf("  Version:                           %u (current)\n", header->e_ident[EI_VERSION]);
	printf("  OS/ABI:                            %u\n", header->e_ident[EI_OSABI]);
	printf("  ABI Version:                       %u\n", header->e_ident[EI_ABIVERSION]);
	printf("  Type:                              0x%X\n", header->e_type);
	printf("  Machine:                           0x%X\n", header->e_machine);
	printf("  Version:                           0x%X\n", header->e_version);
	printf("  Entry point address:               0x%X\n", header->e_entry);
	printf("  Start of program headers:          %u (bytes into file)\n", header->e_phoff);
	printf("  Start of section headers:          %u (bytes into file)\n", header->e_shoff);
	printf("  Flags:                             0x%X\n", header->e_flags);
	printf("  Size of this header:               %u (bytes)\n", header->e_ehsize);
	printf("  Size of program headers:           %u (bytes)\n", header->e_phentsize);
	printf("  Number of program headers:         %u\n", header->e_phnum);
	printf("  Size of section headers:           %u (bytes)\n", header->e_shentsize);
	printf("  Number of section headers:         %u\n", header->e_shnum);
	printf("  Section header string table index: %u\n", header->e_shstrndx);

}

/**
 * main - entry level to program
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line arguments.
 *
 * Return: 0 on success, other values on failure.
 */
int main(int argc, char *argv[])
{
	int fd;
	Elf32_Ehdr elf_header;
	ssize_t bytes_read;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s <elf_file>\n", argv[0]);
		exit(1);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		perror("Failed to open file");
		exit(1);
	}

	bytes_read = read(fd, &elf_header, sizeof(Elf32_Ehdr));
	if (bytes_read == -1)
	{
		perror("Failed to read ELF header");
		close(fd);
		exit(1);
	}

	if (bytes_read != sizeof(Elf32_Ehdr))
	{
		fprintf(stderr, "Incomplete ELF header read\n");
		close(fd);
		exit(1);
	}

	print_elf_header(&elf_header);

	close(fd);
	return (0);
}
