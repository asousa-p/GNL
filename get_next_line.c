/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xsleepp <xsleepp@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 18:47:45 by asousa-p          #+#    #+#             */
/*   Updated: 2026/06/23 23:24:56 by xsleepp          ###   ########.fr       */
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
	clean_buffer(buffer);
	newline = malloc(1);
    if (!newline)
        return (NULL);
    newline[0] = '\0';
	while (!ft_strchr(newline, '\n') && bytes_read != 0)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		buffer[bytes_read] = '\0';
		newline = ft_strjoin(newline, buffer);
	}
	newline = extract_line(newline);
	return (newline);
}
