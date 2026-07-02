/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xsleepp <xsleepp@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 22:24:59 by asousa-p          #+#    #+#             */
/*   Updated: 2026/06/30 20:34:01 by xsleepp          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char *ft_strjoin(char *line, char *buffer)
{
	int		i;
	int		j;
	char	*res;

	i = 0;
	j = 0;
	if (!line || !buffer)
		return (NULL);
	res = malloc(ft_strlen(line) + ft_strlen(buffer) + 1);
	if (!res)
		return (NULL);
	while (line[i])
	{
		res[i] = line[i];
		i++;
	}
	while (buffer[j])
		res[i++] = buffer[j++];
	res[i] = '\0';
	free(line);
	return (res);
}

char *ft_strchr(char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (&str[i]);
		i++;
	}
	if (c == '\0')
		return (&str[i]);
	return (NULL);
}

void	clean_buffer(char *buffer)
{
	int		i;
	int		j;
	
	i = 0;
	j = 0;
	if (!buffer)
		return ;
	while (buffer[i] != '\n' && buffer[i])
		i++;
	i++;
	while (buffer[i])
	{
		buffer[j] = buffer[i];
		i++;
		j++;
	}
	buffer[j] = '\0';
	return ;
}

char *extract_line(char *line)
{
	int		i;
	char	*newline;

	i = 0;
	if (!line)
		return (NULL);
	while (line[i] != '\n' && line[i])
		i++;
	if (line[i] == '\n')
		i++;
	newline = malloc(i + 1);
	if (!newline)
		return (NULL);
	newline[i] = '\0';
	i--;
	while (i >= 0)
	{
		newline[i] = line[i];
		i--;
	}
	return (newline);
}
