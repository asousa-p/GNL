/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xsleepp <xsleepp@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 18:47:45 by asousa-p          #+#    #+#             */
/*   Updated: 2026/07/02 03:20:45 by xsleepp          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd)
{
	static char buffer[BUFFER_SIZE + 1];
    char		*line;
	char		*newline;
	int			bytes_read;     
    
	if (fd < 0 || BUFFER_SIZE < 0)
		return (NULL);
	line = NULL;
    if (buffer[0])
		line = ft_strjoin(line, buffer);
	while (!ft_strchr(line, '\n') && bytes_read != 0)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read < 0)
			return (free(line), NULL);
		if (bytes_read == 0)
			break ;
		buffer[bytes_read] = '\0';
		line = ft_strjoin(line, buffer);
	}
	newline = extract_line(line);
	return (newline);
}
/* 
#include <fcntl.h>
#include <stdio.h>

int main(void) 
{
  	int fd = open("texto.txt", O_RDONLY);
  	char *line;

	while (1)
  	{
		line = get_next_line(fd);
		printf("%s", line);
		if (!line)
			break ;
		free(line);
  	}
  	return (0);
}
 */