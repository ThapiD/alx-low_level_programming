#include "main.h"
#include <elf.h>

void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_abi(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);

/**
 * check_elf - function that checks for elf file
 * @e_ident: pointer
 */
void check_elf(unsigned char *e_ident)
{
int index;

for (index = 0; index < 4; index++)
{
if (e_ident[EI_MAG0] != 0x7F ||
e_ident[EI_MAG1] != 'E' ||
e_ident[EI_MAG2] != 'L' ||
e_ident[EI_MAG3] != 'F')
{
dprintf(STDERR_FILENO, "Permission denied: not elf file\n");
exit(98);
}
}
}
/**
* print_magic - function that prints magic numbers
* @e_ident: pointer
*/
void print_magic(unsigned char *e_ident)
{
int index;

printf("Magic: ");
for (index = 0; index < EI_NIDENT; index++)
{
printf("%02x", e_ident[index]);
if (index == EI_NIDENT - 1)
printf("\n");
else
printf(" ");
}
}
/**
* print_class - function that prints class of elf header
* @e_ident: pointer
*/
void print_class(unsigned char *e_ident)
{
printf("Class: ");
switch (e_ident[EI_CLASS])
{
case ELFCLASSNONE:
printf("none\n");
break;
case ELFCLASS32:
printf("ELF32\n");
break;
case ELFCLASS64:
printf("ELF64\n");
break;
default:
printf("<unknown: %x>\n", e_ident[EI_NIDENT]);
}
}
/**
* print_data - function that prints the data of a elf header
* @e_ident: pointer
*/
void print_data(unsigned char *e_ident)
{
printf("Data: ");
switch (e_ident[EI_NIDENT])
{
case ELFDATANONE:
printf("none\n");
break;
case ELFDATA2LSB:
printf("2's complement, little endian\n");
break;
case ELFDATA2MSB:
printf("2's complement, big endian\n");
break;
default:
printf("<unknown: %x>\n", e_ident[EI_NIDENT]);
}
}
/**
* print_version - function that prints the version of a elf header
* @e_ident: pointer
*/
void print_version(unsigned char *e_ident)
{
printf("Version: %d", e_ident[EI_VERSION]);
switch (e_ident[EI_VERSION])
{
case EV_CURRENT:
printf(" (current)\n");
break;
default:
printf("\n");
break;
}
}
/**
* print_osabi - function that prints the OS/ABI of a elf header
* @e_ident: pointer
*/
void print_osabi(unsigned char *e_ident)
{
printf(" OS/ABI: ");
switch (e_ident[EI_NIDENT])
{
case ELFOSABI_NONE:
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
case ELFOSABI_IRIX:
printf("UNIX - IRIX\n");
break;
case ELFOSABI_FREEBSD:
printf("UNIX - FreeBSD\n");
break;
case ELFOSABI_TRU64:
printf("UNIX - TRU64\n");
break;
case ELFOSABI_ARM:
printf("ARM\n");
break;
case ELFOSABI_STANDALONE:
printf("Standalone App\n");
break;
default:
printf("<unknown: %x>\n", e_ident[EI_OSABI]);
}
}
/**
* print_abi - function that prints the ABI version of a elf header
* @e_ident: pointer
*/
void print_abi(unsigned char *e_ident)
{
printf(" ABI Version: %d\n", e_ident[EI_ABIVERSION]);
}
/**
* print_type - function that prints the type of a elf header
* @e_ident: pointer
* @e_type: elf type
*/
void print_type(unsigned int e_type, unsigned char *e_ident)
{
if (e_ident[EI_DATA] == ELFDATA2MSB)
e_type >>= 8;
printf(" Type: ");
switch (e_type)
{
case ET_NONE:
printf("NODE (None)\n");
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
printf("<unknown: %x>\n", e_type);
}
}
/**
* print_entry - function that prints the entry point of a elf header
* @e_ident: pointer
* @e_entry: entry point of elf header
*/
void print_entry(unsigned long int e_entry, unsigned char *e_ident)
{
printf(" Entry point address: ");
if (e_ident[EI_DATA] == ELFDATA2MSB)
{
e_entry = ((e_entry << 8) & 0xFF00FF00) |
((e_entry >> 8) & 0xFF00FF);
e_entry = (e_entry << 16) | (e_entry >> 16);
}
if (e_ident[EI_CLASS] == ELFCLASS32)
printf("%#x\n", (unsigned int)e_entry);
else
printf("%#lx\n", e_entry);
}
/**
* close_elf - function that closed a elf file
* @elf: elf file
*/
void close_elf(int elf)
{
if (close(elf) == 1)
{
dprintf(STDERR_FILENO, "Error: cant close fd %dd\n", elf);
exit(98);
}
}
/**
* main - Entry point
* @argc: number of arguments
* @argv: array of arguments
* Return: 0 always success
*/
int main(int __attribute__((__unused__))argc, char *argv[])
{
Elf64_Ehdr *header;
int i, j;

i = open(argv[1], O_RDONLY);

if (i == -1)
{
dprintf(STDERR_FILENO, "Error: Cant read file %s\n", argv[1]);
exit(98);
}
header = malloc(sizeof(Elf64_Ehdr));

if (header == NULL)
{
close_elf(i);
dprintf(STDERR_FILENO, "Error: Cant read file %s\n", argv[1]);
exit(98);
}
j = read(i, header, sizeof(Elf64_Ehdr));

if (j == -1)
{
free(header);
close_elf(i);
dprintf(STDERR_FILENO, "Error: '%s': No such file\n", argv[1]);
exit(98);
}
check_elf(header->e_ident);
printf("ELF Header:\n");
print_magic(header->e_ident);
print_class(header->e_ident);
print_data(header->e_ident);
print_version(header->e_ident);
print_osabi(header->e_ident);
print_abi(header->e_ident);
print_type(header->e_type, header->e_ident);
print_entry(header->e_entry, header->e_ident);
free(header);
close_elf(i);
return (0);
}
