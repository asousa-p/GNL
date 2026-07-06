/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asousa-p <asousa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 18:47:45 by asousa-p          #+#    #+#             */
/*   Updated: 2026/07/06 17:52:09 by asousa-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 13
# endif

char	*get_next_line(int fd);

char	*ft_strjoin(char *line, char *buffer);

size_t	ft_strlen(char *str);

char	*ft_strchr(char *str, int c);

void	clean_buffer(char *buffer);

char	*extract_line(char *line);

#endif