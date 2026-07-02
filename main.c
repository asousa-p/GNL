#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int main(void)
{
    int fd = open("abs", O_RDONLY);
    char *line;
    int i = 0;

    while (i < 6)
    {
        /* printf("\nMain Loop i=%d\n\n", i); */
        line = get_next_line(fd);
        printf("%s", line);
        free(line);
        i++;
    }
    return (0);
}