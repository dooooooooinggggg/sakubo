#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

#define ARRLEN 6

int main()
{
    int fd;

    char fn[ARRLEN][16] = {"file_access.c", "segment.c", "Makefile", ".gitignore", "segment", "file_access"};

    for (int i = 0; i < ARRLEN; i++)
    {
        if ((fd = open(fn[i], O_RDONLY)) < 0)
        {
            // close(fd);
            continue;
        }
        printf("%s : fd -> %d\n", fn[i], fd);

        // close(fd);
    }

    return 0;
}
