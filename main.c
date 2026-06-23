#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int main(void)
{
    int fd = open("abs", O_RDONLY);
    char *line;
    int i = 0;

    while (i < 4)
    {
        line = get_next_line(fd);
        printf("%s", line);
        free(line);
        i++;
    }
    return (0);
}