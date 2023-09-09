#include "main.h"
/**
 * print_elf_header - prints elf-header
 * @header: pointer to file
 */
void print_elf_header(const Elf64_Ehdr *header)
{
	int i = 0;
	const char *OSABI[] = {
		"No extensions or unspecified", "Hewlett-Packard HP-UX",
		"NetBSD", "GNU", "Linux", "Sun Solaris", "AIX", "IRIX", "FreeBSD",
		 "Compaq TRU64 UNIX", "Novell Modesto", "Open BSD", "Open VMS",
		"Hewlett-Packard Non-Stop Kernel", "Amiga Research OS",
		"The FenixOS highly scalable multi-core OS", "Nuxi CloudABI",
		"Stratus Technologies OpenVOS", "Architecture-specific value range"
	};
	printf("ELF Header:\n");
	printf("  Magic:   ");
	while (i < EI_NIDENT)
	{
		printf("%02X ", header->e_ident[i]);
		i++;
		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}

	printf("\n");

	switch (header->e_ident[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("CLASS: ELF32\n");
		break;
	case ELFCLASS64:
		printf("CLASS: ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", header->e_ident[EI_CLASS]);
	}

	switch (header->e_ident[EI_DATA])
	{
	case ELFDATA2LSB:
		printf("  Data: 2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("  Data: 2's complement, Big endian\n");
		break;
	default:
		printf("  Data: <unknown: %x>\n", header->e_ident[EI_CLASS]);
	}
	printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
	printf("  OS/ABI: %s\n", OSABI[header->e_ident[EI_OSABI]]);
	printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
	printf("  Type: 0x%X \n", header->e_type);
	printf("  Entry point address: 0x%lX\n", header->e_entry);
}

/**
 * is_elf - check if file is elf
 * @header: pointer to file
 * Return: 0 if not otherwise 1
 */
int is_elf(const Elf64_Ehdr *header, int fd)
{
	int index;
	char elf_magic[] = {0x7F, 'E', 'L', 'F'};

	for (index = 0; index < 4; index++)
	{
		if ((char)header->e_ident[index] != elf_magic[index])
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			close(fd);
			return (0);
		}
	}
	return (1);
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
	Elf64_Ehdr elf_header;
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

	if ((lseek(fd, 0, SEEK_SET) == -1))
	{
		perror("lseek error");
		close(fd);
		exit(1);
	}

	bytes_read = read(fd, &elf_header, sizeof(Elf64_Ehdr));
	if (bytes_read == -1)
	{
		perror("Failed to read ELF header");
		close(fd);
		exit(1);
	}

	if (bytes_read != sizeof(Elf64_Ehdr))
	{
		fprintf(stderr, "Incomplete ELF header read\n");
		close(fd);
		exit(1);
	}
	if (is_elf(&elf_header, fd))
		print_elf_header(&elf_header);
	close(fd);
	return (0);
}
