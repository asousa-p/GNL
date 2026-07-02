#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

//temp:
# include <stdio.h>

# include <unistd.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 13
# endif

char	*get_next_line(int fd);

char	*ft_strjoin(char *line, char *buffer);

size_t  ft_strlen(char *str);

char    *ft_strchr(char *str, int c);

void    clean_buffer(char *buffer);

char    *extract_line(char *line);

#endif