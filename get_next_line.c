/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xsleepp <xsleepp@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 18:47:45 by asousa-p          #+#    #+#             */
/*   Updated: 2026/06/30 20:41:10 by xsleepp          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd)
{
	static char buffer[BUFFER_SIZE + 1];
    char		*line;
	char		*newline;
	int			bytes_read;     
    
	if (fd == 0 || BUFFER_SIZE <= 0)
		return (NULL);
	line = malloc(1);
    if (!line)
        return (NULL);
    line[0] = '\0';
    if (buffer[0])
		line = ft_strjoin(line, buffer);
	while (!ft_strchr(line, '\n') && bytes_read != 0)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read <= 0)
			break ;
		buffer[bytes_read] = '\0';
		line = ft_strjoin(line, buffer);
	}
	clean_buffer(buffer);
	newline = extract_line(line);
	free(line);
	return (newline);
}
