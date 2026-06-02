/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asousa-p <asousa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 18:47:45 by asousa-p          #+#    #+#             */
/*   Updated: 2026/05/29 19:31:57 by asousa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd)
{
	static char *stash;
    char		buffer[BUFFER_SIZE + 1];
	int			bytes_read;     
    
    bytes_read = read(fd, buffer, BUFFER_SIZE);
	buffer[BUFFER_SIZE] = '\0';
    
}
