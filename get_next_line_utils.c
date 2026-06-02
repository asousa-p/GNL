/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asousa-p <asousa-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 22:24:59 by asousa-p          #+#    #+#             */
/*   Updated: 2026/05/29 19:10:13 by asousa-p         ###   ########.fr       */
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

char *ft_strjoin(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	str = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!str)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
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

char *clean_stash(char *stash)
{
	int		i;
	int		j;
	char	*new;
	
	i = 0;
	j = 0;
	if (!stash)
		return (NULL);
	while (stash[i] != '\n' && stash[i])
		i++;
	if (!stash[i])
		return (NULL);
	i++;
	new = malloc(ft_strlen(stash) - i + 1);
	if (!new)
		return (NULL);
	while (stash[i])
	{
		new[j] = stash[i];
		i++;
		j++;
	}
	new[j] = '\0';
	return (new);
}

char *extract_line(char *stash)
{
	int		i;
	char	*str;

	i = 0;
	if (!stash)
		return (NULL);
	while (stash[i] != '\n' && stash[i])
		i++;
	if (stash[i] == '\n')
		i++;
	str = malloc(i + 1);
	if (!str)
		return (NULL);
	str[i] = '\0';
	i--;
	while (i >= 0)
	{
		str[i] = stash[i];
		i--;
	}
	return (str);
}
