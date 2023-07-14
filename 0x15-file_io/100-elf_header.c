#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <elf.h>

#define BUF_SIZE 64

/**
 * print_magic - Prints the ELF magic numbers.
 * @e_ident: The ELF identification array.
 */
void print_magic(unsigned char *e_ident)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", e_ident[i]);
	printf("\n");
}

/**
 * print_class - Prints the ELF class.
 * @e_ident: The ELF identification array.
 */
void print_class(unsigned char *e_ident)
{
	printf("  Class:                             ");
	switch (e_ident[EI_CLASS])
	{
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown>\n");
		break;
	}
}

/**
 * print_data - Prints the ELF data encoding.
 * @e_ident: The ELF identification array.
 */
void print_data(unsigned char *e_ident)
{
	printf("  Data:                              ");
	switch (e_ident[EI_DATA])
	{
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown>\n");
		break;
	}
}

/**
 * print_version - Prints the ELF file version.
 * @e_ident: The ELF identification array.
 */
void print_version(unsigned char *e_ident)
{
	printf("  Version:                           %d (current)\n", e_ident[EI_VERSION]);
}

/**
 * print_os_abi - Prints the operating system and ABI.
 * @e_ident: The ELF identification array.
 */
void print_os_abi(unsigned char *e_ident)
{
	printf("  OS/ABI:                            ");
	switch (e_ident[EI_OSABI])
	{
	case ELFOSABI_SYSV:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	default:
		printf("<unknown: %d>\n", e_ident[EI_OSABI]);
		break;
	}
}

/**
 * print_abi_version - Prints the ABI version.
 * @e_ident: The ELF identification array.
 */
void print_abi_version(unsigned char *e_ident)
{
	printf("  ABI Version:                       %d\n", e_ident[EI_ABIVERSION]);
}

/**
 * print_type - Prints the ELF file type.
 * @e_type: The ELF file type.
 */
void print_type(unsigned int e_type)
{
	printf("  Type:                              ");
	switch (e_type)
	{
	case ET_NONE:
		printf("NONE (Unknown type)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown>\n");
		break;
	}
}

/**
 * print_entry - Prints the entry point address.
 * @e_entry: The entry point address.
 */
void print_entry(unsigned long int e_entry)
{
	printf("  Entry point address:               0x%lx\n", e_entry);
}

/**
 * print_elf_header - Prints the ELF header information.
 * @e_ident: The ELF identification array.
 * @e_type: The ELF file type.
 * @e_entry: The entry point address.
 */
void print_elf_header(unsigned char *e_ident, unsigned int e_type, unsigned long int e_entry)
{
	printf("ELF Header:\n");
	print_magic(e_ident);
	print_class(e_ident);
	print_data(e_ident);
	print_version(e_ident);
	print_os_abi(e_ident);
	print_abi_version(e_ident);
	print_type(e_type);
	print_entry(e_entry);
}

/**
 * main - Displays the information contained in the ELF header of an ELF file.
 * @argc: The number of command-line arguments.
 * @argv: The array of command-line arguments.
 *
 * Return: 0 on success, or 98 on failure.
 */
int main(int argc, char *argv[])
{
	int fd;
	unsigned char buf[BUF_SIZE];
	Elf64_Ehdr *ehdr;
	ssize_t bytes_read;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		exit(98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cannot open file %s\n", argv[1]);
		exit(98);
	}

	bytes_read = read(fd, buf, BUF_SIZE);
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cannot read from file %s\n", argv[1]);
		close(fd);
		exit(98);
	}

	ehdr = (Elf64_Ehdr *)buf;

	if (ehdr->e_ident[EI_MAG0] != ELFMAG0 ||
		ehdr->e_ident[EI_MAG1] != ELFMAG1 ||
		ehdr->e_ident[EI_MAG2] != ELFMAG2 ||
		ehdr->e_ident[EI_MAG3] != ELFMAG3)
	{
		dprintf(STDERR_FILENO, "Error: %s is not an ELF file\n", argv[1]);
		close(fd);
		exit(98);
	}

	print_elf_header(ehdr->e_ident, ehdr->e_type, ehdr->e_entry);

	close(fd);
	return (0);
}

