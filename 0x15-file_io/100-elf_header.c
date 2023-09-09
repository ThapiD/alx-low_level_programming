#include "main.h"
#include <elf.h>
/**
 * read_header - reads elf header
 * @i: integer
 * @header: pointer to constat
 */
void read_header(int i, Elf64_Ehdr *header)
{
	if (read(i, header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
	{
		perror("read");
		exit(98);
	}
}
/**
 * verify - validates elf header
 * @header: pointer to constant
 */
void verify(Elf64_Ehdr *header)
{
	if (header->e_ident[EI_MAG0] != ELFMAG0 ||
	header->e_ident[EI_MAG1] != ELFMAG1 ||
	header->e_ident[EI_MAG2] != ELFMAG2 ||
	header->e_ident[EI_MAG3] != ELFMAG3)
	{
		fprintf(stderr, "Error: not ELF file\n");
		exit(98);
	}
}
/**
 * print_elf_header - displays elf header
 * @header: pointer to constant
 */
void print_elf_header(Elf64_Ehdr *header)
{
	int k;

	printf("Magic: ");
	for (k = 0; k < EI_NIDENT; k++)
	{
		printf("%02x ", header->e_ident[k]);
	}
	printf("\n");
	printf("Class: ");
	printf("%s\n", header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
	printf("Data: ");
	printf("%s\n", header->e_ident[EI_CLASS] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
	printf("Version: ");
	printf("%u\n", header->e_ident[EI_VERSION]);
	printf("OS/ABI: ");
	printf("%u\n", header->e_ident[EI_OSABI]);
	printf("ABI Version: ");
	printf("%u\n", header->e_ident[EI_ABIVERSION]);
	printf("Type: ");
	printf("%u\n", header->e_type);
	printf("Entry point address: ");
	printf("%#010x\n", (unsigned int)header->e_entry);
}
/**
 * main - calling of function
 * @argc: number of arguments
 * @argv: argument characters
 * Return: 0 always success
 */
int main(int argc, char *argv[])
{
	int i = open(argv[1], O_RDONLY);
	Elf64_Ehdr header;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: elf_header elf_filename\n");
		return (98);
	}
	if (i < 0)
	{
		perror("open");
		return (98);
	}
	read_header(i, &header);
	verify(&header);
	print_elf_header(&header);

	close(i);
	return (0);
}
