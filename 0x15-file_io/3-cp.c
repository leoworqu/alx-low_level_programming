#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int main(int argc, char *argv[])
{
    char buffer[1024];
    int src_fd, dest_fd, read_count;

    if (argc != 3)
    {
        fprintf(stderr, "Usage: cp source_file destination_file\n");
        exit(1);
    }

    src_fd = open(argv[1], O_RDONLY);
    if (src_fd < 0)
    {
        fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
        exit(1);
    }

    dest_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
    if (dest_fd < 0)
    {
        fprintf(stderr, "Error: Can't write to file %s\n", argv[2]);
        close(src_fd);
        exit(1);
    }

    while ((read_count = read(src_fd, buffer, sizeof(buffer))) > 0)
    {
        if (write(dest_fd, buffer, read_count) != read_count)
        {
            fprintf(stderr, "Error: Failed to write to file %s\n", argv[2]);
            close(src_fd);
            close(dest_fd);
            exit(1);
        }
    }

    close(src_fd);
    close(dest_fd);
    return 0;
}
