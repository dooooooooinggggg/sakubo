#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main()
{
    int fd;

    char fn[3][16] = {"file_access.c", "segment.c", "Makefile"};

    for (int i = 0; i < 3; i++)
    {
        if ((fd = open(fn[i], O_RDONLY)) < 0)
        {
            close(fd);
            continue;
        }
        printf("%s : fd -> %d\n", fn[i], fd);

        close(fd);
    }

    return 0;
}
