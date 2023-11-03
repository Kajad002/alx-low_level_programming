#include "main.h"
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, 98 on error
 */
int main(int argc, char **argv)
{
    int fd;
    ssize_t n;
    Elf64_Ehdr ehdr;

    if (argc != 2)
    {
        dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
        return (98);
    }
    fd = open(argv[1], O_RDONLY);
    if (fd == -1)
    {
        dprintf(STDERR_FILENO, "Error: Cannot read file %s\n", argv[1]);
        return (98);
    }
    n = read(fd, &ehdr, sizeof(ehdr));
    if (n != sizeof(ehdr))
    {
        dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
        close(fd);
        return (98);
    }
    printf("Magic:   ");
    for (n = 0; n < EI_NIDENT; n++)
        printf("%02x ", ehdr.e_ident[n]);
    printf("\n");
    printf("Class:                             ");
    printf("%s\n", ehdr.e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
    printf("Data:                              ");
    printf("%s\n", ehdr.e_ident[EI_DATA] == ELFDATA2MSB ? "2's complement, big endian" : "2's complement, little endian");
    printf("Version:                           ");
    printf("%d%s\n", ehdr.e_ident[EI_VERSION], ehdr.e_ident[EI_VERSION] == EV_CURRENT ? " (current)" : "");
    printf("OS/ABI:                            ");
    switch (ehdr.e_ident[EI_OSABI])
    {
        case ELFOSABI_SYSV:
            printf("UNIX - System V\n");
            break;
        case ELFOSABI_HPUX:
            printf("HP-UX\n");
            break;
        case ELFOSABI_NETBSD:
            printf("NetBSD\n");
            break;
        case ELFOSABI_LINUX:
            printf("Linux\n");
            break;
        case ELFOSABI_SOLARIS:
            printf("Sun Solaris\n");
            break;
        case ELFOSABI_IRIX:
            printf("SGI Irix\n");
            break;
        case ELFOSABI_FREEBSD:
            printf("FreeBSD\n");
            break;
        default:
            printf("<unknown: %x>\n", ehdr.e_ident[EI_OSABI]);
            break;
    }
    printf("ABI Version:                       ");
    printf("%d\n", ehdr.e_ident[EI_ABIVERSION]);
    printf("Type:                              ");
    switch (ehdr.e_type)
    {
        case ET_NONE:
            printf("No file type\n");
            break;
        case ET_REL:
            printf("Relocatable file\n");
            break;
        case ET_EXEC:
            printf("Executable file\n");
            break;
        case ET_DYN:
            printf("Shared object file\n");
            break;
        case ET_CORE:
            printf("Core file\n");
            break;
        default:
            if ((ehdr.e_type >= ET_LOPROC) && (ehdr.e_type <= ET_HIPROC))
                printf("Processor-specific\n");
            else if ((ehdr.e_type >= ET_LOOS) && (ehdr.e_type <= ET_HIOS))
                printf("Operating system-specific\n");
            else
                printf("<unknown>: %x\n", ehdr.e_type);
            break;
    }
    printf("Entry point address:               ");
    printf("%#lx\n", ehdr.e_entry);

    close(fd);

    return (0);
}
